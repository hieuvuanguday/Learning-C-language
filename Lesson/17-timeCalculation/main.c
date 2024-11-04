#include <stdio.h>
#include <stdlib.h>
//Nhap vao so giay la so nguyen duong
//Quy doi ra gio phut giay tu so giay da cho
//In ra theo format hh:mm:ss
//01:20:09
//%02d, 5 -> 05

int main()
{
    int ss;
    int hh = 0;
    int mm = 0;
    printf("\nNhap so giay di anh chai : ");
    scanf("%d", &ss);
    if(ss >=3600){
        hh = ss / 3600;
        ss = ss % 3600;
    }if(ss >= 60){
        mm = ss / 60;
        ss = ss % 60;
    }
    printf("\nSo gio quy doi la %02d:%02d:%02d", hh, mm, ss);
    return 0;
}


