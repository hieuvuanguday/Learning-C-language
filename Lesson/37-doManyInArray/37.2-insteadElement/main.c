#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void insteadElement(int key, int arr[], int pos);
int main()
{
    int size; int key; int pos;
    int arr[MAX];
    inputArray(arr, &size);
    printf("\nMang : ");
    outputArray(arr, size);
    printf("\nNhap key : ");
    scanf("%d", &key);
    printf("\nNhap vi tri can thay the [0 <= pos <= size]: ");
    scanf("%d", &pos);
    if(pos >= 0 && pos <= size){
        insteadElement(key, arr, pos);
        printf("\nMang da thay the : ");
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
void insteadElement(int key, int arr[], int pos){
    arr[pos] = key;
}
