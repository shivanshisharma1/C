#include <stdio.h>

int main() {
    int sum = 0;

    for (int num = 2; num <= 30; num += 2) {
        sum += num;
    }

    printf("The sum of even integers from 2 to 30 is: %d\n", sum);

    return 0;
}
