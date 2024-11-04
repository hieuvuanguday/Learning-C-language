#include <stdio.h>
#include <stdlib.h>
//10-factorial
int main()
{
    int n;
    int p = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);
    if(n < 0) printf("\nDo ngu, do an hai!");
    else if(n == 0 || n == 1) printf("\nKet qua: %d", p);
    else{
        for(int i = n; i >= 1; i--){
            p *= i;
        }
        printf("\nKet qua: %d", p);
    }
    return 0;
}
