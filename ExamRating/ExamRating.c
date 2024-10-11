#include <stdio.h>
#include <stdlib.h>



int main(){

    int a,b,c,x,y,z;
    int first_sum = 0;
    int second_sum = 0;

    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&x,&y,&z);

    if(a>x){
        first_sum = first_sum + 1;
    }else if(a<x){
        second_sum = second_sum + 1;
    }

    if(b>y){
        first_sum = first_sum + 1;
    }else if(b<y){
        second_sum = second_sum + 1;
    }

    if(c>z){
        first_sum = first_sum + 1;
    }else if(c<z){
        second_sum = second_sum + 1;
    }



    printf("%d %d",first_sum, second_sum);






    return 0;
}
