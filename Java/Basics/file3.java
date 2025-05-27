
import java.util.*;

public class file3 {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int num = sc.nextInt();
        int i = 0;
        if(num == 0 || num == 1) {
            System.out.println("Not prime");
            return ;
        }
        for(i = 2; i*i <= num ;i++) {
            if(num % i == 0) {
                System.out.println("Not Prime");
                return ;
            }
        }
        System.out.println("Prime");
        
    }
}