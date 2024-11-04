#include <stdio.h>
#include <stdlib.h>
//34-sumOddEvenArray
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int* size);
int sumEvenInArray(int arr[], int size);
int sumOddPositionInArray(int arr[],int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int sumMaxAndMin(int arr[], int size);
int Add2NumMax(int arr[], int size);
int Sub2NumMax(int arr[], int size);
int Mul2NumMax(int arr[], int size);
int Div2NumMax(int arr[], int size);
int main()
{
    //Tao mang
    int size;
    int arr[MAX];
    //Nhap, xuat mang
    inputArray(arr, &size);
    printf("\nMang da nhap la : ");
    outputArray(arr, &size);
    //Tinh tong cac so chan trong mang
    int sum1 = sumEvenInArray(arr, size);
    printf("\n\nTong cac so chan trong mang la : %d\n", sum1);
    //Tinh tong cac phan tu o vi tri le trong mang
    int sumOddP = sumOddPositionInArray(arr, size);
    printf("\nTinh tong cac phan tu o vi tri le trong mang : %d\n", sumOddP);
    //Tim so lon nhat
    int max = findMax(arr, size);
    printf("\nSo lon nhat : %d\n", max);
    //Tim so be nhat
    int min = findMin(arr, size);
    printf("\nSo be nhat : %d\n", min);
    //Tong so lon nhat va be nhat
    int sum2 = sumMaxAndMin(arr, size);
    printf("\nTong so lon nhat va be nhat la : %d\n", sum2);
    //Tinh tong, hieu, tich, thuong lon nhat cua 2 so bat ki
    int tongMax = Add2NumMax(arr, size);
    printf("\nTong lon nhat : %d\n", tongMax);
    int hieuMax = Sub2NumMax(arr, size);
    printf("\nHieu lon nhat : %d\n", hieuMax);
    int tichMax = Mul2NumMax(arr, size);
    printf("\nTich lon nhat : %d\n", tichMax);
    float thuongMax = Div2NumMax(arr, size);
    printf("\nThuong lon nhat : %.3f\n", thuongMax);
    return 0;
}

void inputArray(int arr[], int* size){
    printf("\nNhap so phan tu cua mang : ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nArray[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int* size){
    for(int i = 0; i <= *size - 1; i++){
        printf("%5d", arr[i]);
    }
}
int sumEvenInArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    return sum;
}
int sumOddPositionInArray(int arr[],int size){
    int sumOddP = 0;
    for(int i = 0; i <= size - 1; i++){
        if(i  % 2 != 0){
            sumOddP += arr[i];
        }
    }return sumOddP;
}
int findMax(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i <= size - 1; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }return max;
}
int findMin(int arr[], int size){
    int min = arr[0];
    for(int i = 1; i <= size - 1; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }return min;
}
int sumMaxAndMin(int arr[], int size){
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    return max + min;
}
int Add2NumMax(int arr[], int size){
    int tongMax = 0;
    for(int i = 0; i <= size - 2; i++){
        for(int h = i + 1 ; h <= size - 1; h++){
            if(tongMax < arr[i] + arr[h]){
                tongMax = arr[i] + arr[h];
            }
        }
    }return tongMax;
}
int Sub2NumMax(int arr[], int size){
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    return max - min;
}
int Mul2NumMax(int arr[], int size){
    int tichMax = 0;
    for(int i = 0; i <= size - 2; i++){
        for(int h = i + 1 ; h <= size - 1; h++){
            if(tichMax < arr[i] * arr[h]){
                tichMax = arr[i] * arr[h];
            }
        }
    }return tichMax;
}
int Div2NumMax(int arr[], int size){
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    return (float)max / min;
}


