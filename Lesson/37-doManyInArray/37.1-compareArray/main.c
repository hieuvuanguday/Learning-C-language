#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int compareArray(int arr1[], int size1, int arr2[], int size2);
int main()
{
    int size1, size2;
    int arr1[MAX], arr2[MAX];
    printf("\nKhai bao mang 1 : ");
    inputArray(arr1, &size1);
    printf("\nKhai bao mang 2 : ");
    inputArray(arr2, &size2);
    printf("\nMang 1 : ");
    outputArray(arr1, size1);
    printf("\nMang 2 : ");
    outputArray(arr2, size2);
    int check = compareArray(arr1, size1, arr2, size2);
    if(check == 1){
        printf("\nMang 1 > Mang 2");
    }else if(check == -1){
        printf("\nMang 1 < Mang 2");
    }else if(check == 0){
        printf("\nMang 1 = Mang 2");
    }
    return 0;
}
int compareArray(int arr1[], int size1, int arr2[], int size2){
    int size = size1;
    size = size1 > size2 ? size2:size1;
    for(int i = 0; i <= size - 1; i++){
        if(arr1[i] >  arr2[i]) return 1;
        else if(arr1[i] < arr2[i]) return -1;
        else{
            if(size1 == size2) return 0;
            size1 > size2? return 1:return -1
        }
    }
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
