
#include<stdio.h>

int main()
{
    int num, result ;
    scanf("%d", &num);
    if(num > 20) {
        printf("Wrong infrastructure");
    } else {
        result = num + (num/2) + (num % 2);
    }
    printf("%d", result);
}