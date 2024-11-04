#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf("\nHi anh ban !");
    for(int i = 0; i < 10; i++){
        float a,b,c;
        printf("\nNhap canh a : ");
        scanf("%f", &a);
        printf("\nNhap canh b : ");
        scanf("%f", &b);
        printf("\nNhap canh c : ");
        scanf("%f", &c);
        if(a + b > c && a + c > b && b + c > a){
            if(a == b || b == c || c == a){
                if(a == b && a== c){
                    printf("\nDay la tam giac deu");
                }else if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(c,2) + pow(b,2) == pow(a,2)){
                printf("\nDay la tam giac vuong can");
                }else{
                    printf("\nDay la tam giac can");}
            }else if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(c,2) + pow(b,2) == pow(a,2)){
                printf("\nDay la tam giac vuong");
            }else{
                printf("\nDay la tam giac thuong");}
        }else{
            printf("\nDay khong phai la tam giac");}
    }
    printf("\nHet 10 luot thu, nap V.I.P de su dung vinh vien");
    return 0;
}
