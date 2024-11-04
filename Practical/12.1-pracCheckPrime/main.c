#include <stdio.h>
#include <stdlib.h>
//Kiểm tra xem một số có phải số nguyên to hay không
int main()
{
    printf("\nDay la cong cu kiem tra so nguyen to");
    int n; int flag = 1;
    printf("\nNhap n :");
    scanf("%d", &n);
    if(n >= 2){
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }if(flag == 1){
            printf("\n%d la so nguyen to", n);
        }else{
            printf("\n%d khong phai la so nguyen to", n);
            }
    }else{
        printf("\n%d khong phai la so nguyen to", n);
    }
    return 0;
}
