#include <stdio.h>
#include <stdlib.h>
//30-swapFunction
//Viet ham swap 2 bien
//ham co vao
void swap(int a, int b);
void swapP(int* a, int* b);
int main()
{
    int number1, number2;
    printf("\nNumber1 = ");
    scanf("%d", &number1);
    printf("\nNumber2 = ");
    scanf("%d", &number2);
    //swap(number1, number2);
    swapP(&number1, &number2);
    printf("\nNumber1 = %d ", number1);
    printf("\nNumber2 = %d ", number2);
    return 0;
}
//pass by value: truyen tham tri
//truyen gia tri cho thang khac tham khao
void swap(int a, int b){
    a += b;
    b = a - b;
    a = a - b;
    printf("\nA = %d", a);
    printf("\nB = %d", b);
}
//Pointed
//Pass ny references: truyen tham chieu, (phép chiếu Pi)
void swapP(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
