#include <stdio.h>
#include <stdlib.h>
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void delAllKey(int arr[], int* size, int key);
const int MAX = 100;
int main()
{
    int size; int key;
    int arr[MAX];
    inputArray(arr, &size);
    printf("\nMang : ");
    outputArray(arr, size);
    printf("\nNhap Key : ");
    scanf("%d", &key);
    delAllKey(arr, &size, key);
    printf("\nMang : ");
    outputArray(arr, size);
    return 0;

}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc mang: ");
    scanf("%d", size);
    for(int i = 0; i <=*size  - 1 ; i++){
        printf("\nArr[%d] n: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
void delAllKey(int arr[], int* size, int key){
    int tmp = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] != key){
            arr[tmp] = arr[i];
            tmp++;
        }
    }
    *size = tmp;
}
