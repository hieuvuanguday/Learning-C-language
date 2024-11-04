#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
    printf("\nNhap vao so nguyen duong : ");
    scanf("%d", &n);
    if(n > 0){
        while(n > 0){
            sum = sum + (n % 10);
            n/=10;
        }
    }printf("\nTong cac chu so : %d\n", sum);
    return 0;
}
