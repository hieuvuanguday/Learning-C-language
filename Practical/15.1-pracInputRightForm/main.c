#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    printf("\nNhap vao so nguyen dich thuc : ");
    scanf("%d", &number);
    scanf("%c", &buffer);
    fflush(stdin);
    if(buffer != 10){
        printf("\nNgu vcl");
    }
    return 0;
}
