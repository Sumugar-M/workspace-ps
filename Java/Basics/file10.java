
import java.util.*;

public class file10 {

    static int is_armstrong(int num) {
        int org_num = num ;

        while(num != 0) {
            
        }
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

        for(i = num2; i > frst_num; i--) {
            if(is_armstrong(i)) {
                scnd_num = i;
                break;
            }
        }
    }
}