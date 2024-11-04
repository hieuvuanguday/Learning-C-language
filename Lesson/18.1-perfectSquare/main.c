#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap n : ");
    scanf("%d", &n);
    if((int)sqrt(n) == sqrt(n)){
       printf("\n%d la so chinh phuong", n);
    }else{
        printf("\n%d khong phai so chinh phuong", n);
    }
    return 0;
}
