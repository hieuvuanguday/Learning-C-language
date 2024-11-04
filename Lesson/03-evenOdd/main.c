#include <stdio.h>
#include <stdlib.h>
//03-evenOdd
/*
    nhập từ bàn phím vào một số nguyên
    kiểm tra xem số đó chẵn hay lẻ
*/
int main()
{
    //I
    int number;
    printf("\nPlz, input a number:");
    scanf("%d", &number);
    //P & O
    number % 2 == 0 ? printf("\nEven!") ; printf("\nOdd!");
    return 0;
}
