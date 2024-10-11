#include <stdio.h>
#include <stdlib.h>

int main(){

    int score;
    scanf("%d",&score);

    if(score>=90 && score<=100){
        printf("A");
    }else if(score>=85 && score<=89){
        printf("B+");

    }else if(score>=75 && score<=84){
        printf("B");

    }else if(score>=70 && score<=74){
        printf("C+");

    }else if(score>=60 && score<=69){
        printf("C");

    }else{
        printf("See you next semester");
    }










    return 0;
}
