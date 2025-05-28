
// find the sum of the digits of a number.......

#include<stdio.h>

int main()
{
    int num = 0,  sum_rslt = 0, digit_val = 0;
    
    scanf("%d", &num);

    while(num != 0) {
        digit_val = num % 10;
        sum_rslt += digit_val;  
        num /= 10;
    }
    printf("Sum of its digit is: %d\n", sum_rslt);
    return 0;
}
