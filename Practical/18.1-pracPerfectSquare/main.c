#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap n : ");
    scanf("%d", &n);
    int i = sqrt(n);
    if(i == sqrt(n)){
        printf("\n%d la so chinh phuong", n);
    }else{
            printf("\n%d khong la so chinh phuong\n", n);
    }
    return 0;
}
