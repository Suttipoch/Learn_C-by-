#include <stdio.h>
#include <stdlib.h>

int main(){

    int money,time;

    scanf("%d",&money);

    if(money<100){
        printf("can not withdraw money !!\n");
    }else{
        if(money>=1000){
           time = money/1000;
           money = money - time*1000;
           printf("1000 bath x ");
           printf("%d\n",time);



        }if(money<=500){
           time = money/500;
           money = money - time*500;
           printf("500 bath x ");
           printf("%d\n",time);

        }if(money>=100){
           time = money/100;
           money = money - time*100;
           printf("100 bath x ");
           printf("%d\n",time);
        }


    }







    return 0;
}
