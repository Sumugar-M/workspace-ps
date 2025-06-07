/*

Write a program to check the given number is Automorphic number or not

Input Format

5

Constraints

Input should be the number.

Output Format

Given number is Automorphic number

Sample Input 0

25
Sample Output 0

Given number is Automorphic number
Explanation 0

Consider the given number is 25
25*25 = 625
Here the given number is equal to the last 2 digits of the processed result, then the given number is Automorphic number

Consider if the given number is 24
24*24 = 576

Here the given number is not equal to the last 2 digits of the processed result, then the given number is not Automorphic number

Sample Input 1

24
Sample Output 1

Given number is not an Automorphic number
Sample Input 2

7
Sample Output 2

Given number is not an Automorphic number

*/

import java.util.*;

public class file14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int new_num = num * num;
        int two_dgt = new_num % 100;

        if(num == two_dgt) 
            System.out.println("Automorphic..");
        else 
           System.out.println("Not Automorphic..");

    }
}