#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
int findValue(int arr[], int size, int val);
void outputArray(int arr[], int size);
int main()
{
    int size;
    int arr[MAX];
    int val;
    inputArray(arr, &size);
    printf("\nMang da nhap : ");
    outputArray(arr, size);
    printf("\nNhap value : ");
    scanf("%d", &val);
    int place = findValue(arr, size, val);
    if(place == -1){
        printf("\nKhong co Value trong mang");
        return 0;
    }
    printf("\nVi tri dau tien cua Value trong mang la : %d", place);
    return 0;
}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc mang : ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array [%d] : ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
int findValue(int arr[], int size, int val){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}
