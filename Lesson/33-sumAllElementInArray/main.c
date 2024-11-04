#include <stdio.h>
#include <stdlib.h>
//33-sumAllElementInArray
void inputArray(int array[], int* size);
void outputArrat(int array[], int* size);
int sumAllElementInArray(int array[], int size);
float averageAllElementInArray(int array[], int size);
const int MAX = 100;
int main()
{
    int size;
    int array[MAX];
    inputArray(array, &size);
    printf("\nMang vua nhap la : ");
    outputArray(array, &size);
    int sum = sumAllElementInArray(array, size);
    printf("\nTong la : %d", sum);
    float average = averageAllElementInArray(array, size);
    printf("\nTrung binh cong : %.2f", average);
    return 0;
}
void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc cho mang : ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap phan tu Arr[%d] : ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int* size){
    for(int i = 0; i <= *size - 1; i++){
        printf("%5d", array[i]);
    }
}
int sumAllElementInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum;
}
float averageAllElementInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    float average = (float)sum/size;
    return average;
}
