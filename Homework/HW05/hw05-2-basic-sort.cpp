/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Input[1]\n");
    scanf("%d",&num1);
    printf("Input[2]\n");
    scanf("%d",&num2);
    printf("Input[3]\n");
    scanf("%d",&num3);
    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("%d %d %d\n", num1, num2, num3);
        } else {
            printf("%d %d %d\n", num1, num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("%d %d %d\n", num2, num1, num3);
        } else {
            printf("%d %d %d\n", num2, num3, num1);
        }
    } else {
        if (num1 >= num2) {
            printf("%d %d %d\n", num3, num1, num2);
        } else {
            printf("%d %d %d\n", num3, num2, num1);
        }
    }
}