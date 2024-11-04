#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nDay la cong cu tinh 1^n + 2^n +...+ n^n");
    int n;
    int s = 0;
    printf("\nVui long nhap n : ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        s = s + pow(i,n);
    }
    printf("\nKet qua la : %d", s);
    return 0;
}
