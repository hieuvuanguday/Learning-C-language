#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void softArrayAZ(int arr[], int size);
void softArrayZA(int arr[], int size);
void bubbleSoftAZ(int arr[], int size);
int main()
{
    int size;
    int arr[MAX];
    inputArray(arr, &size);
    printf("\nMang [A -> Z]: ");
    softArrayAZ(arr, size);
    outputArray(arr, size);
    printf("\nMang [Z -> A]: ");
    softArrayZA(arr, size);
    outputArray(arr, size);
    printf("\nMang [A -> Z] <bbs>: ");
    bubbleSoftAZ(arr, size);
    outputArray(arr, size);
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
void softArrayAZ(int arr[], int size){
    for(int i = 0; i<= size - 1; i++){
        for(int h = i + 1; h <= size - 1; h++){
            if(arr[h] < arr[i]){
                int tmp = arr[i];
                arr[i] = arr[h];
                arr[h] = tmp;            }
        }
    }
}
void softArrayZA(int arr[], int size){
    for(int i = 0; i<= size - 1; i++){
        for(int h = i + 1; h <= size - 1; h++){
            if(arr[h] > arr[i]){
                int tmp = arr[i];
                arr[i] = arr[h];
                arr[h] = tmp;            }
        }
    }
}
void bubbleSoftAZ(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        for(int j = 0; j <= size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
