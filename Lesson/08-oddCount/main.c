#include <stdio.h>
#include <stdlib.h>
//08-oddCount
//Nhập Start End và đếm số lẻ
int main()
{
    int a, b;
    int c = 0;
    printf("\nNhap Start : ");
    scanf("%d", &a);
    printf("\nNhap End : ");
    scanf("%d", &b);
    if( a > b){
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
    for(a; a <=b; a++){
        if(a % 2 == 1){
                c = c + a;
        }
    }
    printf("\nTong cac so le la %d", c);
    return 0;
}
