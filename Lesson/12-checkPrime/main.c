#include <stdio.h>
#include <stdlib.h>
//nhsp so nguyen duong n
//kiem tra phai so nguyen to hay khong
//flag = phat co = linh canh
int main()
{
    printf("\nDay la cong cu kiem tra so nguyen to");
    int n;
    int flag = 1;
    printf("\nNhap n di anh ban : ");
    scanf("%d", &n);
    if(n >= 2){
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            printf("\nDay la so nguyen to");
        }else if(flag == 0){
            printf("\nDay khong phai so nguyen to");}
    }else{
    printf("\nDay khong la so nguyen to");}
    return 0;
}
