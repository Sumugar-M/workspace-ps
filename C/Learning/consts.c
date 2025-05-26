
#include<stdio.h>

int main()
{
    int i = 10;
    const int j = 20;

    int *danger = (int*)(&j);   //cast-away the constant...

    *danger  = 50;
    printf("Const j = %d",j);
}