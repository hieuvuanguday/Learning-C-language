#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int checkPrime(int n);
int sumAllPrime(int arr[], int size);
int main()
{
    int size;
    int arr[MAX];
    inputArray(arr, &size);
    printf("\nMang: ");
    outputArray(arr, size);
    int sum = sumAllPrime(arr, size);
    printf("\nTong cac so nguyen to trong mang: %d", sum);
    return 0;
}
int sumAllPrime(int arr[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        int check = checkPrime(arr[i]);
        if(check == 1) sum += arr[i];
    }
    return sum;
}

int checkPrime(int n){
    if(n >= 2){
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i ==0) return 0;
        }
        return 1;
    }else return 0;

}

void inputArray(int arr[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);    }
}
