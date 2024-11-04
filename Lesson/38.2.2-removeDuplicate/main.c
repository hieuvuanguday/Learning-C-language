#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void removeDupV1(int arr[], int* size);
void removeDupV2(int arr[], int* size);
void deleteElement(int arr[], int* size, int po);
int main()
{
    int size;
    int arr[MAX];
    inputArray(arr, &size);
    printf("\nMang vua nhap: ");
    outputArray(arr, size);
    removeDupV1(arr, &size);
    //removeDupV2(arr, &size);
    printf("\nMang sau khi lam la: ");
    outputArray(arr, size);
    return 0;
}
void inputArray(int arr[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nArray[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
void removeDupV1(int arr[], int* size){
    for(int i = 0; i <= *size - 2; i++){
        for(int h = i + 1; h <= *size - 1; h++){
            if(arr[i] == arr[h]){
                deleteElement(arr, size, h);
                h--;
            }
        }
    }
}
void deleteElement(int arr[], int* size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
void removeDupV2(int arr[], int* size)
{
    int tmp = 0;
    for(int i = 0; i < *size - 1; i++){
        int check = 1;
        for(int h = 0; h < tmp; h++){
            if(arr[h] == arr[i]) check = 0;
        }
        if (check == 1){
            arr[tmp] = arr[i];
            tmp++;
        }
    }
    *size = tmp;
}
