#include <stdio.h>

void xyz() {
    static int i = 0; // Static variable to keep track of the number of calls
    i++;
    printf("This function has been called %d times\n", i);
}

int main() {
    xyz();
    xyz();
    xyz();
    return 0;
}

