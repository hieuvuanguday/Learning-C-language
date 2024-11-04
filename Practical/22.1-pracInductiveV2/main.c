#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int mau = 0;
    float s = 0;
    printf("\nNhap vao so nguyen : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        mau+=i;
        s = s + 1/(float)mau;
    }
    printf("\nKet qua la : %f\n", s);
    return 0;
}
