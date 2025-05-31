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

import java.util.*;

public class file7 {

    static int reverse_num(int num) {
        int rev = 0, dgt = 0;

        while(num != 0) {
            dgt = num % 10;
            rev = rev * 10 + dgt;
            num  /= 10;
        }
        return rev;
    }

    static boolean is_palindrome(int num) {
        return num == reverse_num(num);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt(), count = 0, rev = 0, flag = 0;

        while(count <= 5) {
             
             rev = reverse_num(num);
             num += rev;
             count++;

             if(is_palindrome(num)) {
                flag = 1;
                System.out.println(num);
                break;
             }
        }
        if(flag == 0) {
            System.out.println("5 Iteration was completed...");
        }
       
    }
}