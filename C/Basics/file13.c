/*
 Strong number or not....
*/

int factorial(int num) {
    if(num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int is_strong(int num) {

    int sum  = 0, org_num = num;
    while(num != 0) {
        int dgt = num % 10;
        sum += factorial(dgt);
        num /= 10;
    }

    if(sum == org_num) {
        return 1;
    } 
    return 0;
}

#include<stdio.h>

int main()
{
    int num ;
    scanf("%d", &num);
    if(is_strong(num)) 
    {
        printf("Strong number..");
    } else {
        printf("Not Strong Number..");
    }

}