/*** 

Need to write a program to print the 3 greatest numbers.

Input Format

3 2 6

Constraints

2<=N<=10

Output Format

6

Sample Input 0

6 5 8
Sample Output 0

8

***/

#include<stdio.h>

int main()
{
      int num1 = 0, num2 = 0, num3 = 0, result = 0;
      printf("Enter three input value: ");
      scanf("%d %d %d", &num1, &num2, &num3);
      result = (num1 > num2) ? ((num1 > num3) ? num1 : num3 ) : (num2 > num3 ) ? num2 : num3 ;
      printf("The largest value among three is: %d", result);
}