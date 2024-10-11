#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    int isPrime = 1;


    /* input ตัวเลข */
    printf("Please enter an integer <between 2 to 9999999>: ");
    scanf("%d",&number);





    /* เช็คว่าเป็น จำนวนเฉพาะ */
    if(number <= 1 || number > 9999999){
            printf("%d",number);
            printf(" is not between 2 to 9999999,please re-enter.\n");

    }else{
        if(number == 2){
            printf("%d",number);
            printf(" is a prime number.\n");
        }else{
            for(int i=2;i<number;i++){
                if(number%i==0){
                    isPrime = 0;
                    break;

                }

            }
            if(isPrime){
                printf("%d",number);
                printf(" is a prime number.\n");
            }else{
                printf("%d",number);
                printf(" is a not prime number.\n");
            }

        }


    }





    return 0;
}
