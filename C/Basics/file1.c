/*

Consider the below series : 0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8 This series is a mixture of 2 series all the odd terms in this series form even numbers in ascending order and every even terms is derived from the previous term using the formula (x/2)
The value n in a positive integer that should be read from STDIN the nth term that is calculated by the program should be written to STDOUT. Other than the value of the nth term no other characters /strings or message should be written to STDOUT.
For example if n=10,the 10 th term in the series is to be derived from the 9th term in the series. The 9th term is 8 so the 10th term is (8/2)=4. Only the value 4 should be printed to STDOUT.

Input Format
10

Constraints
You can assume that the n will not exceed 20,000.

Output Format
4

Sample Input 0
10

Sample Output 0
4

*/

#include<stdio.h>

int main()
{
    int num = 0, prev_term = 0, result = 0;
    printf("Enter the num: ");
    scanf("%d", &num);
    if(num <= 20000) {
        if(num % 2 == 0) {
            prev_term = (num - 1) ;
            result = prev_term / 2;
            printf("Answer: %d ", result);
        } else {
            prev_term = num - 1;
            printf("Answer: %d ", prev_term);
        }
    }

}