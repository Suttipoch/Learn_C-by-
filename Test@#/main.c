#include <stdio.h>
#include <stdlib.h>

int main(){
    int row,column;
    scanf("%d %d",&row,&column);

    for(int i=1;i<=row;i++){
            for(int k=1;k<=column;k++){
                if(k%2==0){
                    printf("#");
                }else{
                    printf("@");
                }
            }
            printf("\n");


    }







    return 0;
}
