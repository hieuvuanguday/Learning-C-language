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
    int menu;
    printf("\n\nNhap 10 de mo Menu!\n\n");
    scanf("%d", &menu);
    while(menu != 10){
        fflush(stdin);
        printf("\nNhan 10 di thang ngu \7\2\2\2\n");
        scanf("%d", &menu);
    }
    printf("\nDung roi! Be gioi qua\3\3\3\n");
    printf("\n1:Tinh tong cac so chan trong mang\n2:Tinh tong cac phan tu o vi tri le\n3:Tim so lon nha\n4:Tim so be nhat\n5:Tong so lon nhat va be nhat\n6:Tong lon nhat\n7:Hieu lon nhat\n8:Tich lon nhat\n9:Thuong lon nhat\n0:Ket thuc\n\7");
    while(menu != 0){
        fflush(stdin);
        printf("\nLua chon cua ban la : ");
        scanf("%d", &menu);
        if(menu >= 0 && menu <=9){
            printf("\nMang da nhap la : ");
            outputArray(arr, &size);
            if(menu == 1){
                int sum1 = sumEvenInArray(arr, size);
                printf("\n\nTong cac so chan trong mang la : %d\n", sum1);
            }if(menu == 2){
                int sumOddP = sumOddPositionInArray(arr, size);
                printf("\n\nTinh tong cac phan tu o vi tri le trong mang : %d\n", sumOddP);
            }if(menu == 3){
                int max = findMax(arr, size);
                printf("\n\nSo lon nhat : %d\n", max);
            }if(menu == 4){
                int min = findMin(arr, size);
                printf("\n\nSo be nhat : %d\n", min);
            }if(menu == 5){
                int sum2 = sumMaxAndMin(arr, size);
                printf("\n\nTong so lon nhat va be nhat la : %d\n", sum2);
            }if(menu == 6){
                int tongMax = Add2NumMax(arr, size);
                printf("\n\nTong lon nhat : %d\n", tongMax);
            }if(menu == 7){
                int hieuMax = Sub2NumMax(arr, size);
                printf("\n\nHieu lon nhat : %d\n", hieuMax);
            }if(menu == 8){
                int tichMax = Mul2NumMax(arr, size);
                printf("\n\nTich lon nhat : %d\n", tichMax);
            }if(menu == 9){
                float thuongMax = Div2NumMax(arr, size);
                printf("\n\nThuong lon nhat : %.3f\n", thuongMax);
            }
        }else{
            printf("\nNhap lai di thang ngu \2\2\2\n");
        }
    }
    while(1 == 1){
            printf("\7");
    }
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
    return findMax(arr, size) + findMin(arr, size);
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
    return findMax(arr, size) - findMin(arr, size);
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
    return (float)findMax(arr, size)/findMin(arr, size);
}
