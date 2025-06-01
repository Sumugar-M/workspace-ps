/*

Write a program to make prime number by adding even numbers only 5 numbers

Input Format

19

Constraints

Input should be the numbers

Output Format

4 10 12 18 22

Sample Input 0

3
Sample Output 0

2 4 8 10 14

*/
#include<stdio.h>

int is_prime(int num) {

    if(num == 1 || num == 0 ) {
        return 0;
    } else {
        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int num, count = 0, even_count = 0;

    scanf("%d", &num);
    
    while(1) {

        even_count += 2;
        num += even_count;

        if(is_prime(num)) {
            printf("%d ",even_count);
            count++;
        }
        if(count ==  5) {
            break;
        }
        num -= even_count;
    
    }
    
}