#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_number;
    char student_class[10];
    int student_id;
    float total_fees;
    float fees_paid;
};

void addStudent() {
    struct Student s;
    FILE *file = fopen("students.txt", "a");  // Open file in append mode

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter student name: ");
    scanf(" %[^\n]s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);
    printf("Enter class: ");
    scanf(" %[^\n]s", s.student_class);
    printf("Enter student ID: ");
    scanf("%d", &s.student_id);
    printf("Enter total fees: ");
    scanf("%f", &s.total_fees);
    printf("Enter fees paid: ");
    scanf("%f", &s.fees_paid);

    fprintf(file, "%s %d %s %d %.2f %.2f\n", s.name, s.roll_number, s.student_class, s.student_id, s.total_fees, s.fees_paid);
    fclose(file);
    
    printf("Student added successfully!\n");
}

void displayStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll Number: %d\nClass: %s\nStudent ID: %d\nTotal Fees: %.2f\nFees Paid: %.2f\n",
           s.name, s.roll_number, s.student_class, s.student_id, s.total_fees, s.fees_paid);
}

void checkFees(struct Student s) {
    float due_fees = s.total_fees - s.fees_paid;
    
    if (due_fees <= 0) {
        printf("Fees Status: Fully Paid.\n");
    } else {
        float fine = due_fees * 0.1;  // 10% fine on pending fees
        printf("Fees Status: Pending.\nDue Fees: %.2f\nFine: %.2f\nTotal Amount to Pay: %.2f\n", due_fees, fine, due_fees + fine);
    }
}

void searchStudent() {
    struct Student s;
    FILE *file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char search_name[50];
    int search_roll, choice, found = 0;

    printf("Search by:\n1. Roll Number\n2. Full Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter roll number to search: ");
        scanf("%d", &search_roll);

        while (fscanf(file, "%s %d %s %d %f %f", s.name, &s.roll_number, s.student_class, &s.student_id, &s.total_fees, &s.fees_paid) != EOF) {
            if (s.roll_number == search_roll) {
                displayStudent(s);
                checkFees(s);
                found = 1;
                break;
            }
        }
    } else if (choice == 2) {
        printf("Enter full name to search: ");
        scanf(" %[^\n]s", search_name);

        while (fscanf(file, "%s %d %s %d %f %f", s.name, &s.roll_number, s.student_class, &s.student_id, &s.total_fees, &s.fees_paid) != EOF) {
            if (strcmp(s.name, search_name) == 0) {
                displayStudent(s);
                checkFees(s);
                found = 1;
                break;
            }
        }
    } else {
        printf("Invalid choice!\n");
    }

    fclose(file);

    if (!found) {
        printf("Student not found!\n");
    }
}

int main() {
    int choice;
    
    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Search Student\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                searchStudent();
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
