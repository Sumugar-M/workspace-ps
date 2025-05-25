
import java.util.*;

public class file1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt(), prev_term = 0, result = 0;
        if(num <= 20000) {
            if(num % 2 == 0) {
                prev_term = num - 1;
                result = prev_term / 2;
                System.out.println(result);
            } else  {
                prev_term = num - 1;
                System.out.println(prev_term);
            }
        }

    }
}