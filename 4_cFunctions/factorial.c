#include<stdio.h>
int factorial(int n);

int main(){
    int n, res;
    printf("factoraial of the given digit is :\n");
    scanf("%d", &n);
    res = factorial(n);
    printf("the factorial for the given digit is  %d\n", res);
    return 0;
}

int factorial(int n){
    if(n == 1){
        return 1;
    }
    int factnum = factorial( n - 1 );
    int factn = factnum * n;
    return factn;

}
