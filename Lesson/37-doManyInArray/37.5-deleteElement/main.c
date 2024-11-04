#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void deleteElement(int arr[], int* size, int pos);
int main()
{
    int size; int arr[MAX];
    int pos;
    inputArray(arr, &size);
    printf("\nMang da nhap : ");
    outputArray(arr, size);
    printf("\nNhap vi tri can xoa [0 <= pos <= size]: ");
    scanf("%d", &pos);
    if(pos >= 0 && pos <= size){
        deleteElement(arr, &size, pos);
        printf("\nMang da xoa : ");
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
void deleteElement(int arr[], int* size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
