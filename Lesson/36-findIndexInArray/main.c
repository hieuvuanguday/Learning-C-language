#include <stdio.h>
#include <stdlib.h>
//36-FindFirstIndex
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
//V1: tim vi tri 1 key trong mang
//ham nhan vao 1 key
//ham kiem tra xem key co ton tai trong mang hay khong
//neu co thi return ra vi tri cua key
//khong thi return ra -1
int findIndexInArray(int arr[], int size, int key);
//V2: tìm vị trí xuất hiện của key trong mảng
//Hàm nhận vào 1 key, mảng 1, mảng 2
//      hàm tìm key trong mảng 1
//      mảng 2 đóng vai trò là mảng chứa kết quả
//      kết quả là các vị trí tìm đc key trong mảng 1
void findAllIndexInArray(int key, int arr[], int size, int result[], int* sizeResult);
//V3: tìm mảng sub(phụ) trong mảng chính(main)
//  hàm nhận vào mảng chính main, mảng phụ sub
//  hàm tìm xem mảng phụ có tồn tại
//  trong mảng chính hay không
//      nếu có thì return ra vị trí tìm đc
//      nếu không thì return ra -1;
int findSubInMain(int arrMain[], int sizeMain, int arrSub[], int sizeSub);
int main()
{
    int sizeMain, sizeSub;
    int arrMain[MAX], arrSub[MAX];
    printf("\nMang Main : ");
    inputArray(arrMain, &sizeMain);
    printf("\nMang Sub : ");
    inputArray(arrSub, &sizeSub);
    printf("\nMang Main : ");
    outputArray(arrMain, sizeMain);
    printf("\nMang Sub : ");
    outputArray(arrSub, sizeSub);
    //V1
    /*int pos = findIndexInArray(arr, size,key);
    if(pos == -1){
        printf("\nKhong co key trong mang");
    }else{
        printf("\nVi tri key : %d", pos);
    }*/
    /*//V2
    int posList[MAX];
    int sizePosList = 0;
    findAllIndexInArray(key, arr, size, posList, &sizePosList);
    printf("\nCac vi tri key : ");
    outputArray(posList, sizePosList);
    */
    //V3
    int posArr = findSubInMain(arrMain, sizeMain, arrSub, sizeSub);
    if(posArr == -1){
        printf("\nKhong co Sub trong Main!");
    }else{
        printf("\nVi tri Sub trong Main : %d", posArr);
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
int findIndexInArray(int arr[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
void findAllIndexInArray(int key, int arr[], int size, int result[], int* sizeResult){
    *sizeResult = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key){
            result[*sizeResult] = i;
            (*sizeResult)++;
        }
    }
}
int findSubInMain(int arrMain[], int sizeMain, int arrSub[], int sizeSub){
    for(int i = 0; i <= sizeMain - 1; i++){
        if(arrMain[i] == arrSub[0]){
            int tmp = i;
            for(int h = 0; h <= sizeSub - 1; h++){
                if(arrMain[tmp] != arrSub[h])   break;
                tmp++;
                if(h == sizeSub - 1)            return i;
            }
        }
    }
    return -1;
}

