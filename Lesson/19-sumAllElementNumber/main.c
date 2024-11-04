#include <stdio.h>
#include <stdlib.h>
//19-sumAllElementNumber
//nhập vào 1 số nguyên dương
//tính tổng các chữ số của số đó
//1234
//-> 10
int main()
{
    int n;
    int result = 0;
    printf("\nNhap so nguyen duong : ");
    scanf("%d", &n);
    if(n >= 0){
        while(n != 0){
            result+=(n % 10);
            n/=10;
        }
    printf("\nKet qua : %d", result);
    }
    return 0;
}
