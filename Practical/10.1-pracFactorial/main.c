#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nDay la cong cu tinh giai thua");
    float n;
    printf("\nVui long nhap n : ");
    scanf("%f", &n);
    float t = 1;
    for(float i = 1; i <= n; i++){
        t = t*i;
    }
    printf("\nKet qua la : %.0f", t);
    return 0;
}
