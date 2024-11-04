#include <stdio.h>
#include <stdlib.h>
int checkPrime(int* num);

int main()
{
    int num;
    int flag = checkPrime(&num);
    if(flag == 1){
        printf("\nDay la so nguyen to");
    }else if(flag == 0){
        printf("\nDay khong phai la so nguyen to");
    }
    return 0;
}
int checkPrime(int* num){
    printf("\nNhap vao mot so nguyen : ");
    scanf("%d", num);
    for(int i = 2; i <= sqrt(*num); i++){
        if(*num % i == 0){
            return 0;
        }
    }
    return 1;
}


