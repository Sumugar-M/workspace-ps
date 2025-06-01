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
import java.util.*;

public class file8 {

    static boolean is_prime(int num) {
        if(num == 0 || num == 1) {
            return false;
        } else {
            for(int i = 2; i * i <= num; i++) {
                if(num % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt(), even_count = 0, count = 0;

        while(true) {
            even_count += 2;
            num += even_count;

            if(is_prime(num)) {
                count++;
                System.out.println(even_count);
            } 
            if(count == 5) {
                break;
            }
            num -= even_count;
        }

    }
}