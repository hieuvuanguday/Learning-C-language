#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void insertArr(int arr[], int* size, int sub[], int sizeSub, int pos);
int main()
{
    int size, sizeSub;
    int arr[MAX], sub[MAX];
    printf("\nMang chinh: ");
    inputArray(arr, &size);
    printf("\nMang phu: ");
    inputArray(sub, &sizeSub);
    printf("\nMang chinh: ");
    outputArray(arr, size);
    printf("\nMang phu: ");
    outputArray(sub, sizeSub);
    int pos;
    printf("\nNhap pos: ");
    scanf("%d", &pos);
    insertArr(arr, &size, sub, sizeSub, pos);
    printf("\nMang chinh: ");
    outputArray(arr, size);
    printf("\nMang phu: ");
    outputArray(sub, sizeSub);


    return 0;
}
void inputArray(int arr[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
void insertArr(int arr[], int* size, int sub[], int sizeSub, int pos){
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeSub] = arr[i];
    }
    for(int h = 0; h <= sizeSub - 1; h++){
        arr[pos] = sub[h];
        pos++;
        (*size)++;
    }

}
