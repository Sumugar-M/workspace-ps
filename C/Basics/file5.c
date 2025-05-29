
// factorial of a number ..

int factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    } else {
        return num * factorial(num-1);
    }
   
}

#include<stdio.h>

int main()
{
    int num, result ;
    scanf("%d",&num);
    result = factorial(num);
    printf("%d",result);
}