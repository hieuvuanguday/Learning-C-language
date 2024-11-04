#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char buffer;
    printf("\nNhap vao mot so nguyen nha anh ban : ");
    do{
        fflush(stdin);
        scanf("%d", &num);
        scanf("%c", &buffer);
        if(buffer != 10){
            printf("\nNhap sai roi ! Nhap lai di thang ngu nay : ");
        }
    }while(buffer != 10);
    printf("\nHop le ! So da nhap : %d", num);
    return 0;
}
