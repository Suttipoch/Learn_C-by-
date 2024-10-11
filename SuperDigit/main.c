#include <stdio.h>
#include <stdlib.h>

int main(){
    int number,loop,sum = 0;


    scanf("%d %d",&number,&loop);
    while(number > 0){
        sum = sum + number%10;
        number = number/10;
    }

    sum = sum * loop;

    int NewNumber = 0;

    while(sum >= 10){
        NewNumber=0;
        while(sum > 0){
            NewNumber = NewNumber + sum%10;
            sum = sum/10;
        }
        sum = NewNumber;
    }
    printf("%d",sum);








    return 0;
}
