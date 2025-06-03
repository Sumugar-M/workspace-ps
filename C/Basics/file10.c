
#include<stdio.h>
#include<math.h>

int count_digit(int dgt) {
    int sing_dgt = 0, count  = 0;
    while(dgt != 0) {
       sing_dgt = dgt % 10;
       count++;
       dgt /= 10;
    }
    return count;
}

int is_armstrong(int num) {
    

    int dgt, org_num = num, sum = 0;
    int pow_dgt = count_digit(org_num);
    while(num != 0) {
        dgt = num % 10;
        sum += (int)round(pow(dgt,pow_dgt));
        num /= 10;
    }
    if(sum ==  org_num) {
        return 1;
    }
    return 0;
}


int main()
{
    int num1, num2, flag1 = 0, flag2 = 0, first_arm = 0, scnd_arm = 0;
    scanf("%d %d", &num1, &num2);

     for(int i = num1; i <= num2; i++) {
        if(is_armstrong(i)) {
            first_arm = i;
            break;
        }
     }

     for(int i = num2; i > scnd_arm ;i--) {
        if(is_armstrong(i)) {
            scnd_arm = i;
            break;
        }
     }

     printf("%d", first_arm + scnd_arm);
}