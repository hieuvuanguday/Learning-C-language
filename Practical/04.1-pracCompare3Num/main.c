#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nChao anh ban");
    for( int i = 0; i < 10; i++){
        int a, b, c;
        printf("\nNhap a : ");
        scanf("%d", &a);
        printf("\nNhap b : ");
        scanf("%d", &b);
        printf("\nNhap c : ");
        scanf("%d", &c);
        if(a > b && a > c){
            printf("\na la so lon nhat");
        }else if(b > c && b > a){
            printf("\nb la so lon nhat");
        }else if(c > a && c > b){
            printf("\nc la so lon nhat");
        }else if(a == b && a > c){
            printf("\na va b la cac so lon nhat");
        }else if(b == c && b > a){
            printf("\b va c la cac so lon nhat");
        }else if(a == c && a > b){
            printf("\na va c la cac so lon nhat");
        }else if(a == c && b == c){
            printf("a, b va c la cac so lon nhat");
        }
    }printf("\nDa het luot thu. Vui long nap V.I.P");
    return 0;
}
