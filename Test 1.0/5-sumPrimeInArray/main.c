#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
int sumPrime(int arr[], int size);
int main()
{
    int size;
    int arr[MAX];
    printf("\nNhap kich thuoc mang : ");
    scanf("%d", &size);
    for(int i = 0; i <= size - 1; i++){
        printf("\nNhap arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nMang da nhap la : ");
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
    int sum = sumPrime(arr, size);
    printf("\nTong cac so nguyen to trong mang la : %d", sum);
    return 0;
}
int sumPrime(int arr[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        int flag = 1;
        if(arr[i] >= 2){
            for(int h = 2; h <= sqrt(arr[i]); h++){
                if(arr[i] % h == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                sum += arr[i];
            }
        }
    }
    return sum;
}
