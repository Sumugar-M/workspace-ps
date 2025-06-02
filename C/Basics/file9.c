/*

Write a program to print the non prime numbers for the given range

Input Format

10
20

Constraints

Input should be numbers

Output Format

10 12 14 15 16 18 20

Sample Input 0

15
20
Sample Output 0

15 16 18 20

*/
#include<stdio.h>

int is_prime(int num) {
    int i;

    if(num == 0 || num == 1) {
        return 0;
    } else {
        for(i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int num1, num2, i;

    scanf("%d\n%d",&num1, &num2);

    for(i = num1; i <= num2 ;i++) {
        if(!is_prime(i)) {
            printf("%d ",i);
        }
    }


}