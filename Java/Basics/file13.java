
import java.util.*;

public class  file13 {

    static int factorial(int num) {
        if(num == 0 || num == 1) {
            return 1;
        } else {
            return num * factorial(num - 1);
        }
    }
     
    static boolean is_strong(int num) {
        int sum = 0, dgt = 0, org_num  = num;

        while(num != 0) {
            dgt = num % 10;
            sum += factorial(dgt);
            num /= 10;
        }

        if(sum ==  org_num) {
            return true;
        }

        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        
        if(is_strong(num)) {
            System.out.println("Strong Number..");
        } else {
            System.out.println("Not Strong Number..");
        }
    }
}