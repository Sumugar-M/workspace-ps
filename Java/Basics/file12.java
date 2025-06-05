
// factorial of a number .......

import java.util.*;

public class file12 {

    static int calc_factorial(int num) {
        if(num == 0 || num == 1) {
            return 1;
        } else {
            return num * calc_factorial(num - 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int fact = 0;

        fact = calc_factorial(num);

        System.out.println(fact);
    }
}