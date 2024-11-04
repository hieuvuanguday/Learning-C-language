#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int checkAnna(int arr[], int size);

int main()
{
    int size;
    int arr[MAX];
    inputArray(arr, &size);
    printf("\nMang : ");
    outputArray(arr, size);
    int check = checkAnna(arr, size);
    if(check == 0){
        printf("\nHong co thuoc dang 'anna'");
    }else if(check == 1){
        printf("\nDay thuoc dang 'anna'");
    }
    return 0;
}
void inputArray(int arr[], int* size){
    printf("\nNhap size : ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
int checkAnna(int arr[], int size){
    for(int i = 0; i <= size/2 - 1; i++){
        if(arr[i] != arr[size - 1 - i]){
            return 0;
        }
    }
    return 1;
}