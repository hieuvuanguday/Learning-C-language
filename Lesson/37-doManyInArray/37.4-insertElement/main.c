#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void insertElement(int key, int arr[], int* size, int pos);

int main()
{
    int size; int pos; int key; int arr[MAX];
    inputArray(arr, &size);
    printf("\nMang da nhap : ");
    outputArray(arr, size);
    printf("\nNhap key : ");
    scanf("%d", &key);
    printf("\nNhap pos [0 <= pos <= size] : ");
    scanf("%d", &pos);
    if(pos >= 0 && pos <= size){
        insertElement(key, arr, &size, pos);
        printf("\nMang da them : ");
        outputArray(arr, size);
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
void insertElement(int key, int arr[], int* size, int pos){
    (*size)++;
    for(int i = *size - 1; i >= pos + 1; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
}
