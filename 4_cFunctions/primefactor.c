#include <stdio.h>
int primefactors(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    primefactors(num);

    return 0;
}
int primefactors(int n) {
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2) {
        printf("%d\n", n);
    }
    return 0;
}
