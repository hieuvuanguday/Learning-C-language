#include <stdio.h>
#include <stdlib.h>
int sumNum(int* num);
int main()
{
    int num;
    int sum = sumNum(&num);
    printf("\nTong cac chu so cua num la : %d", sum);
    return 0;
}
int sumNum(int* num){
    printf("\nNhap vao mot so nguyen : ");
    scanf("%d", num);
    int sum = 0;
    while(*num != 0){
        sum += *num % 10;
        *num /= 10;
    }
    return sum;
}

