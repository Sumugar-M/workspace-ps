
/*


Submissions
Leaderboard
Discussions
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

import java.util.*;

public class file9 {

    static  boolean is_prime(int num) {
        int i = 0;

        if(num == 0 || num == 1) {
            return false;
        } else {
            for(i = 2; i * i <= num; i++) {
                if(num % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        
        Scanner sc  = new Scanner(System.in);

        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int i = 0;

        for(i = num1; i <= num2; i++) {
            if(!is_prime(i)) {
                System.out.print(i+" ");
            }
        }
    }
}