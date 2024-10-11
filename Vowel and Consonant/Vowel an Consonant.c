#include <stdio.h>
#include <stdlib.h>

int main(){

    char alphabet;

    scanf("%c",&alphabet);
    if(alphabet=='A' || alphabet=='a' || alphabet=='E' || alphabet=='e' ||
       alphabet=='I' || alphabet=='i' || alphabet=='O' || alphabet=='o' ||
       alphabet=='U' || alphabet=='u'){
           printf("Vowel"); //สระ

    }else{
        printf("Consonant"); //พยัญชนะ
    }





    return 0;
}
