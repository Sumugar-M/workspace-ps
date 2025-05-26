/*

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

*/

import java.util.*;

public class file2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int result = 0;
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();

        result = num1 > num2 ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
        System.out.println("Result : "+ result);
    }
}