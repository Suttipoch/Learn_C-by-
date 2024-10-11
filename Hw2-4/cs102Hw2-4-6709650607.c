#include <stdio.h>
#include <stdlib.h>

int main(){

    int beginning;
    int last;


    /* input ตัวเลขตัวเเรก */
    printf("Please enter the beginning integer: ");
    scanf("%d", &beginning);


    /* input ตัวเลขตัวสุดท้าย */
    printf("Please enter the last integer: ");
    scanf("%d", &last);


    /* แสดงเลขตั้งแต่ เลขตัวแรก จนถึง  เลขตัวสุดท้าย ที่หารด้วย 13ลงตัว*/
    printf("All the numbers that can be divided by 13 are:\n");
    for(int i = beginning; i <= last; i++){
        if(i%13 == 0){
            printf("%d\n", i);
        }
    }
    printf("Bye!!\n");








    return 0;
}
