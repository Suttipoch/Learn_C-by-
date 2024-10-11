#include <stdio.h>
#include <stdlib.h>

int main(){


    /* ความยาว ด้านของสามเหลี่ยม */
    int x, y, z;

    /* รับ input ด้านของสามเหลี่ยม */
    printf("Please enter length of each side of your triangle: ");
    scanf("%d %d %d", &x, &y, &z);


    /* เช็คว่า  สามารถเป็นสามเหลี่ยมได้ไหม */
    if( x+y<=z || x+z<=y || z+y<=x || x<=0 || y<=0 || z<=0){
        printf("This is NOT a possible triangle.\n");

    }else if(x==y && y==z){  /* เช็คว่าเป็น  สามเหลี่ยมด้านเท่า*/
        printf("This is an equilateral triangle.\n");

    }else if(x==y || x==z || z==y){  /* เช็คว่าเป็น  สามเหลี่ยมหน้าจั่ว*/
        printf("This is an isosceles triangle.\n");

    }else{  /* เช็คว่าเป็น  สามเหลี่ยมด้านไม่เท่า*/
        printf("This is a scalene triangle.\n");
    }












    return 0;
}
