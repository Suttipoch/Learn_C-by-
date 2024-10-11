#include <stdio.h>
#include <stdlib.h>

int main(){
    float mother;
    float father;

    /* รับinput ส่วนสูงของแม่ */
    printf("Enter the height of the mother (centimeters): ");
    scanf("%f",&mother);

    /* รับinput ส่วนสูงของพ่อ */
    printf("Enter the height of the father (centimeters): ");
    scanf("%f",&father);


    /* คำนวนความสูงเฉลี่ยของ พ่อ แม่ */
    float average = (mother + father)/2;

    /* ความสูง ต่ำสุดของลูก */
    float low_child = average - 13.5;

    /* ความสูง สูงสุดของลูก */
    float high_child = average + 13.5;

    /* output ช่วงความสูงของลูก */
    printf("The possible height of the child is between ");
    printf("%.2f", low_child);
    printf(" to ");
    printf("%.2f", high_child);
    printf(" centimeters.\n");








    return 0;
}
