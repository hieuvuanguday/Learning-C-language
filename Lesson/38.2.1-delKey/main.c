#include <stdio.h>
#include <stdlib.h>
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int delKey(int arr[], int* size, int key);
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
    int flag = delKey(arr, &size, key);
    if(flag == 0){
        printf("\nMang da xoa Key : ");
        outputArray(arr, size);
    }else if(flag == 1){
        printf("\nKhong co Key trong mang!");
    }
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
int delKey(int arr[], int* size, int key){
    int flag = 1;
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] == key){
            flag = 0;
            for(int h = i; h <= *size - 2; h++){
                arr[h] = arr[h + 1];
            }
            i--;
            (*size)--;
        }
    }
    return flag;
}
