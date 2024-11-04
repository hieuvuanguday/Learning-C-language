#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char buffer = 0;
    printf("\nNhap vao mot so nguyen dich thuc : ");
    scanf("%d", &n);
    scanf("%c", &buffer);
    while(buffer != 10){
        fflush(stdin);
        printf("\nNhap lai di : ");
        scanf("%d", &n);
        scanf("%c", &buffer);
    }
    printf("\nSo da nhap la  : %d\n", n);
    return 0;
}
