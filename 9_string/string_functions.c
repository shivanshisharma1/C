#include <stdio.h>

// function 1: swap
void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

// function 2: find length
int strlen(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}

// function 3: reverse the array
void reverse_string(char arr[]) {
    int start = 0;
    int end = strlen(arr) - 1;
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// function 4: copy array from source array to destination array
void strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Don't forget to null-terminate the destination string
}

// main function to demonstrate the output of each function
int main() {
    // Test swap function
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    // Test strlen function
    char str1[] = "Hello, World!";
    printf("Length of '%s' is %d\n", str1, strlen(str1));

    // Test reverse_string function
    char str2[] = "Hello, World!";
    reverse_string(str2);
    printf("Reversed string: %s\n", str2);

    // Test strcpy function
    char src[] = "Hello, World!";
    char dest[50];
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    return 0;
}

