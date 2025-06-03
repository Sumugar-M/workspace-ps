
#include<stdio.h>
#include<math.h>

int is_armstrong(int onum) {

    int dgt, pow_dgt, sum = 0;
    while(num != 0) {
        dgt = num % 10;
        pow_dgt = pow(dgt,3);
        sum += pow_dgt;
        num /= 10;
    }
    if(sum ==  num) {
        return 1;
    }
    return 0;
}


int main()
{
    int num1, num2, flag1 = 0, flag2 = 0, first_arm = 0, scnd_arm = 0;
    scanf("%d\n%d", &num1, &num2);

    while(num1 != num2) {
       // printf("in_while_loop\n");
        if(is_armstrong(num1) && flag1 == 0) {
            first_arm = num1;
            flag1  = 1;
            printf("hai\n");
        } 

        if(is_armstrong(num2) && flag2 != 1) {
            scnd_arm = num2;
            flag2  = 1;
            printf("hai\n");
        } 
      //  printf("%d %d\n",num1,num2);
        num1++;
        num2--;
    }
    printf("%d",first_arm + scnd_arm);
}