#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void devideArray(int arr1[], int* size1, int arr2[], int *size2, int pos);
int main()
{
    int size1, size2;
    int arr1[MAX], arr2[MAX];
    int pos;
    inputArray(arr1, &size1);
    printf("\nMang ban dau : ");
    outputArray(arr1, size1);
    printf("\nNhap vi tri can chia [0 <= pos <= size] : ");
    scanf("%d", &pos);
    if(pos >= 0 && pos <= size1){
        devideArray(arr1, &size1, arr2, &size2, pos);
        printf("\nMang 1 : ");
        outputArray(arr1, size1);
        printf("\nMang 2 : ");
        outputArray(arr2, size2);
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
void devideArray(int arr1[], int* size1, int arr2[], int *size2, int pos){
    *size2 = 0;
    for(int i = pos; i <= *size1 - 1; i++){
        arr2[*size2] = arr1[i];
        (*size2)++;
    }
    *size1 = pos;
}
