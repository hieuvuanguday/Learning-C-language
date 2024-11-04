#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nDay la cong cu tinh gia tri so thu n trong day Fibonachi");
    int x1 = 0;
    int x2 = 1;
    int n, x3;
    printf("\nNhap n : ");
    scanf("%d", &n);
    if(n == 1){
        x3 = 1;
    }else{
        for(int i = 1; i <= n -1; i++){
            x3 = x1 + x2;
            x1 = x2;
            x2 = x3;
        }
    }
    printf("\nSo can tim la : %d", x3);
    return 0;
}
