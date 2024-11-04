#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void delFirstIndexKey(int arr[], int* size, int key);
int main()
{
    int size;
    int key;
    int arr[MAX];
    inputArray(arr, &size);
    printf("\nMang: ");
    outputArray(arr, size);
    printf("\nNhap key: ");
    scanf("%d", &key);
    delFirstIndexKey(arr, &size, key);
    printf("\nMang sau khi xoa: ");
    outputArray(arr, size);
    return 0;
}
void delFirstIndexKey(int arr[], int* size, int key){
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] == key){
            for(int j = i; j <= *size - 2; j++){
                arr[j] = arr[j + 1];
            }
            (*size)--;
            return;
        }
    }
}

void inputArray(int arr[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);    }
}
