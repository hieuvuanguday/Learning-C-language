#include <stdio.h>
#include <stdlib.h>
//18-perfectSquare
//số chính phương
//số chính phương là số nếu căn 2 ta đc số nguyên dương
//9
//8
//Noob: for
//pro: float và int , ép kiểu
int main()
{
    int n;
    printf("\nNhap vao so can kiem tra : ");
    scanf("%d", &n);
    for(int i = 1; i <= sqrt(n); i++){
        if(i*i == n){
            printf("\n%d la so chinh phuong", n);
            return;
        }
    }printf("\n%d khong phai so chinh phuong", n);
    return 0;
}
