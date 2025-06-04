
import java.util.*;

public class file10 {

    static int count(int num) {
        int count = 0;
        while(num != 0) {
            int single = num % 10;
            count++;
            num /= 10;
        }
        return count;
    }

    static boolean is_armstrong(int num) {

        int org_num = num, sum = 0;
        int dgt_count = count(org_num);

        while(num != 0) {
            int dgt = num % 10;
             sum += (int)Math.pow(dgt, dgt_count);
             num /= 10;
        }

        return sum == org_num;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int frst_num  = 0;
        int scnd_num  = 0;

        for(int i = num1 ; i <= num2; i++) {
            if(is_armstrong(i)) {
                frst_num = i;
                 break;
            }
        }

        for(int i = num2; i > frst_num; i--) {
            if(is_armstrong(i)) {
                scnd_num = i;
                break;
            }
        }

        System.out.println(frst_num + scnd_num);
    }
}