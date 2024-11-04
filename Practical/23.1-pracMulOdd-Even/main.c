#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int mulOdd = 1;
    int mulEven = 1;
    int countOdd = 0;
    int countEven = 0;
    printf("\nNhap so nguyen n : ");
    scanf("%d", &n);
    //
    for(int i = 1; i <= n - 1; i++){
        if(i % 2 == 0){
            mulEven *= i;
            countEven = 1;
        }else{
            mulOdd *= i;
            countOdd = 1;
        }
    }
    printf("\nTich so chan la : %d", mulEven*countEven);
    printf("\nTich so le la : %d\n", mulOdd*countOdd);
    return 0;
}
