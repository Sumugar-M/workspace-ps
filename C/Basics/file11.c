
// given number is palindrome or not .

#include<stdio.h>

int main() 
{
    int num = 0, i, org_num = 0, rev = 0;

    scanf("%d", &num);
    org_num = num;

    while(num != 0) {
        int dgt = num % 10;
        rev = rev * 10 + dgt;
        num /= 10;
    }

    if(org_num == rev) {
        printf("Palindrome..\n");
    } else {
        printf("Not Palindrome...\n");
    }

    
}