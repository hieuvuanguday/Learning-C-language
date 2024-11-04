#include <stdio.h>
#include <stdlib.h>

void swapNum(int* n1, int* n2);
int main()
{
    printf("\nDay la cong cu hoan doi ! ");
    int num1, num2;
    printf("\nNhap number 1 : ");
    scanf("%d", &num1);
    printf("\nNhap number 2 : ");
    scanf("%d", &num2);
    swapNum(&num1, &num2);
    printf("\nNumber 1 : %d", num1);
    printf("\nNumber 2 : %d", num2);
    return 0;
}
void swapNum(int* n1, int* n2){
    *n1 += *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
}
