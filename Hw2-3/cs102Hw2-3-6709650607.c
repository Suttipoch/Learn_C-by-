#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c;
    char size;


    /* input ว่าต้องการหาค่า ต่ำสุด หรือ สูงสุด */
    printf("DO you want to find smallest or largest number? <S/L>: ");
    scanf("%c", &size);


    /* input จำนวนเต็ม3ตัว */
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);


    /* หาค่าสูงสุด */
    if(size == 'L'){
         if(a>=b && a>=c){
        printf("Largest number: ");
        printf("%d\n",a);

    }else if(b>=a && b>=c){
        printf("Largest number: ");
        printf("%d\n", b);

    }else if(c>=a && c>=b){
        printf("Largest number: ");
        printf("%d\n", c);
    }
  }


      /* หาค่าต่ำสุด */
    if(size == 'S'){
         if(a<=b && a<=c){
        printf("Smallest number: ");
        printf("%d\n",a);

    }else if(b<=a && b<=c){
        printf("Smallest number: ");
        printf("%d\n", b);

    }else if(c<=a && c<=b){
        printf("Smallest number: ");
        printf("%d\n", c);
    }
  }




   return 0;
}
