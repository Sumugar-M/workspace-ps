
#include<stdio.h>

int main()
{
   unsigned long long int num, i;

    scanf("%llu", &num);
    if (num == 0 || num == 1) {
        printf("Not prime");
        return 0;
    }
    for(i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            printf("Not Prime");
            return 0;
        } 
    }
    printf("Prime number");

}