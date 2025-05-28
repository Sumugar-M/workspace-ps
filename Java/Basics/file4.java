
import java.util.*;

public class file4 {
    
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int sum_rslt = 0, digit_value = 0;

        while(num != 0) {
            digit_value = num % 10;
            sum_rslt += digit_value;
            num /= 10;
        }

        System.out.println("Sum of its digit is: "+sum_rslt);

    }
}