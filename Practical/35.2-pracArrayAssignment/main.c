#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void outputArray(int arr[], int size);
void copyIndexToArray2(int arr1[], int size1, int arr2[], int* size2, int val);
int main()
{
    int size1, size2;
    int arr1[MAX], arr2[MAX];
    int val;
    printf("\nNhap kich thuoc mang 1 : ");
    scanf("%d", &size1);
    for(int i = 0; i <= size1 - 1; i++){
        printf("\nNhap Array [%d] : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nMang da nhap : ");
    outputArray(arr1, size1);
    printf("\nNhap value : ");
    scanf("%d", &val);
    copyIndexToArray2(arr1, size1, arr2, &size2, val);
    return 0;
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}


void copyIndexToArray2(int arr1[], int size1, int arr2[], int* size2, int val){
    *size2 = 0;
    for(int i = 0; i <= size1 - 1; i++){
        if(arr1[i] == val){
            arr2[*size2] = i;
            (*size2)++;
        }
    }
    printf("\nMang 2 :");
    outputArray(arr2, *size2);
}

