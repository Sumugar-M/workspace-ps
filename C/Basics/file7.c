
/*

Take the given input number, reverse it and add it to the original number until the
obtained number is a palindrome or 5 iterations are completed.

Input Format

32
Explanation:
23 + 32 = 55

Constraints

20<=n<=1000

Output Format

55

Sample Input 0

39
Sample Output 0

363

*/


#include<stdio.h>



int reverse_num(int num) {

    int rev = 0, digt = 0;
    while(num != 0) {
        digt = num % 10;
        rev  = rev * 10 + digt;
        num /= 10;
    }
     return rev;
}

int is_palindrome(int num) {
   if(num == reverse_num(num))
   {
     return 1;
   } else {
    return 0;
   }
}

int main()
{
    int num, rev, count = 0, flag = 0;

    scanf("%d", &num);

    rev  = reverse_num(num);
    num += rev;
    count+=1;

    while(!is_palindrome(num)) {
    
        rev = reverse_num(num);
        num += rev;
        if(count == 5) {
            flag  = 1;
            printf("5 iteration completed..\n");
            break;
        }
        count++;
      
    }
  //  printf("%d\n",count);
    if(flag == 0) {
        printf("%d",num);
    }
   return 0;

}