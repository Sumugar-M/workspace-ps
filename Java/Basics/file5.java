
// factorial of a number ....

import java.util.*;

public class file5 {

    static int factorial(int num) {
        if ( num == 0 || num == 1 ) {
            return 1;
        } else {
            return num * factorial(num - 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt(),result = 0;
        
        result = factorial(num);
        System.out.println(result);

    }
}