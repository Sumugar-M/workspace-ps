//Factorial of a number ....

int factorial_calc(int num) {
    if(num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial_calc(num - 1);
    }
}

#include<stdio.h>

int main()
{
    int num, fact ;
    
    scanf("%d", &num);

    fact = factorial_calc(num);

    printf("%d",fact);
}