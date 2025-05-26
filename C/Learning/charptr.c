
#include<stdio.h>
#include<string.h>

void replace(char *subject, char search, char replace)
{
    for(int i=0;;i++) {
        if(*(subject + i) == search) {
            *(subject + i) = replace;
        }
        if(*(subject + i) == '\0') {
            break;
        }

        // if( subject[i] == search) {
        //     subject[i] = replace;
        // }
        // if( subject[i] == '\0') {
        //     break;
        // }
    }
}

int main()
{

    // ALL ARRAYS ARE POINTERS AND ALL POINTERS ARE ARRAYS.....
    char subject[] = "Hello World";
    printf("Address of index : %p\n",&subject[0]);
    printf("Value of subject : %p\n\n", subject);

    for(int i = 0; i < strlen(subject); i++) {
        printf("Value of subject[%d] is : %c\n",i, subject[i]);
        printf("Address of subject[%d] is : %p\n",i, &subject[i]);
        printf("\n");
    }
    printf("--------------------------------------------------------------\n");
    for(int i = 0; i < strlen(subject); i++) {
        printf("Value of subject[%d] is : %c\n",i, *(subject + i));
        printf("Address of subject[%d] is : %p\n",i, &subject[i]);
        printf("\n");
    }

    replace(subject, 'o', 'i');
    printf("\n\n%s",subject);
    

}