#include <stdio.h>
#include <stdlib.h>
//09-nhap n, tinh tong 1^n.....n^n
int main()
{
    int n;
    int s = 0;
    printf("\nNhap n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        s = s + pow(i,n);
    }
    printf("\nTong cua day so la : %d", s);
    return 0;
}
