#include <stdio.h>
#include <stdlib.h>
void swap2Num(float* num1, float* num2);
int main()
{
    int num1, num2;
    swap2Num(&num1, &num2);
    return 0;
}
void swap2Num(float* num1, float* num2){
    printf("\nNhap Number 1 : ");
    scanf("%f", num1);
    printf("\nNhap Number 2 : ");
    scanf("%f", num2);
    float tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
    printf("\nNumber 1 : %.2f", *num1);
    printf("\nNumber 2 : %.2f", *num2);
}


