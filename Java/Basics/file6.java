
import java.util.*;

public class file6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt(), result = 0;

        if(num > 20) {
            System.out.println("Wrong Infrastructure..");
        } else {
            result = num + (num/2) + (num % 2);
             System.out.println(result);
        }
       
    }
}