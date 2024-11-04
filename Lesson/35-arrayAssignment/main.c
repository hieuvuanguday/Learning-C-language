#include <stdio.h>
#include <stdlib.h>
//35-arrayAssignment
//gán mảng
//copy mảng (clone) V1 V2
//tạo 2 mảng, nhập vào giá trị
//viết hàm cho mảng 1 copy mang2
//in 2 mảng để xem kết quả
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int* size);
void cpyArray(int arr1[], int* size1, int arr2[], int size2);
void cpyArrayV2(int arr1[], int* size1, int arr2[], int size2);
void concatArray(int arr1[], int* size1, int arr2[], int size2);
//Bai tap:
//đảo ngược mảng (reverse) V1 V2
//Nối mảng (concat) V1 V1
int main()
{
    int arr1[MAX];
    int size1;
    int arr2[MAX];
    int size2;
    //Nhap
    printf("\nNhap mang 1 : ");
    inputArray(arr1, &size1);
    printf("\nNhap mang 2 : ");
    inputArray(arr2, &size2);
    //Xuat
    printf("\nMang 1 : ");
    outputArray(arr1, &size1);
    printf("\nMang 2 : ");
    outputArray(arr2, &size2);
    concatArray(arr1, &size1, arr2, size2);
    printf("\nCopy da xong!");
    printf("\nMang 1 : ");
    outputArray(arr1, &size1);
    printf("\nMang 2 : ");
    outputArray(arr2, &size2);
    return 0;
}
void inputArray(int arr[], int* size){
    printf("\nNhap size : ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int* size){
    for(int i = 0; i <= *size - 1; i++){
        printf("%5d", arr[i]);
    }
}
void cpyArray(int arr1[], int* size1, int arr2[], int size2){
    for(int i = 0; i <= size2 - 1; i++){
        arr1[i] = arr2[i];
    }
    *size1 = size2;
}
void cpyArrayV2(int arr1[], int* size1, int arr2[], int size2){
    *size1 = 0;
    for(int i = 0; i <= size2 - 1; i++){
        arr1[*size1] = arr2[i];
        (*size1)++;
    }
}
void concatArray(int arr1[], int* size1, int arr2[], int size2){
    for(int i = 0; i <= size2 - 1; i++){
        arr1[*size1] = arr2[i];
        (*size1)++;
    }
}





