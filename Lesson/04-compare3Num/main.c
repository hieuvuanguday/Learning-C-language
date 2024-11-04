#include <stdio.h>
#include <stdlib.h>
//04-compare3Num
//Nhập 3 nguyên a b c
//In ra tên biến lớn nhất
int main()
{
    int arr[3];
    for(int i = 0; i <= 2; i++){
        printf("\nNhap so thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 1; i <= 2; i++){
        if(arr[i] > max) max = arr[i];
    }
    printf("\nSo lon nhat: %d", max);
    return 0;
}
