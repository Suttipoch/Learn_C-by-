#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, isPrime = 0;
    printf("Please enter an integer <between 2 to 9999999>: ");
    scanf("%d",&number);

    if(number<2 || number>9999999){
        printf("%d ",number);
        printf("is not between 2 to 9999999,please re-enter.\n");
    }else{
        if(number==2){
            isPrime=0;

        }

        for(int i=2;i<number;i++){

            if(number%i==0){
                isPrime = 1;
                break;

            }else{
                isPrime = 0;
            }
        }
    }
    if(isPrime==0){
        printf("%d ",number);
        printf("is a prime number.");
    }else{
        printf("%d ",number);
        printf("is a not prime number.");
    }






    return 0;
}
