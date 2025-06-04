
//given number is palindrome or not ..

import java.util.*;

public class file11 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int rev = 0, org_num = num;

        while(num != 0) {
            int dgt = num % 10;
            rev = rev * 10 + dgt;
            num /= 10;
        }

        if(rev == org_num) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not Palindrome..");
        }
    }
}