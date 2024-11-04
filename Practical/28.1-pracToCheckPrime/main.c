#include <stdio.h>
#include <stdlib.h>
//
void checkPrimeV1(void);
//
void checkPrimeV2(int number, int flag0);
//
int checkPrimeV3(void);
int checkFlagV3(void);
//
int checkPrimeV4(int number, int flag0);
int checkFlagV4(int number, int flag0);
//
int main()
{
    /*DEMO Main
    printf("\nDay la cong cu kiem tra so nguyen to");
    int n; int flag = 1;
    printf("\nNhap n :");
    scanf("%d", &n);
    if(n >= 2){
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }if(flag == 1){
            printf("\n%d la so nguyen to", n);
        }else{
            printf("\n%d khong phai la so nguyen to", n);
            }
    }else{
        printf("\n%d khong phai la so nguyen to", n);
    }
    */

    /*DEMO V1
    printf("\nDay la cong cu kiem tra so nguyen to");
    printf("\nNhap n :");
    checkPrimeV1();
    */

    /*DEMO V2
    printf("\nDay la cong cu kiem tra so nguyen to");
    int n; int flag = 1;
    printf("\nNhap n :");
    scanf("%d", &n);
    checkPrimeV2(n, flag);
    */

    /*DEMO V3
    printf("\nDay la cong cu kiem tra so nguyen to");
    printf("\nNhap n :");
    int n =  checkPrimeV3();
    int flag = checkFlagV3();
    if(n >= 2){
        if(flag == 1){
            printf("\n%d la so nguyen to", n);
        }else{
            printf("\n%d khong phai la so nguyen to", n);
        }
    }else{
        printf("\n%d khong phai la so nguyen to", n);
    }
    */
    /*DEMO V4
    printf("\nDay la cong cu kiem tra so nguyen to");
    int n; int flag = 1;
    printf("\nNhap n :");
    scanf("%d", &n);
    checkPrimeV4(n, flag);
    flag = checkFlagV4(n, flag);
    if(n >= 2){
        if(flag == 1){
            printf("\n%d la so nguyen to", n);
        }else{
            printf("\n%d khong phai la so nguyen to", n);
            }
    }else{
        printf("\n%d khong phai la so nguyen to", n);
    }
    */

    return 0;
}

//Source V1
void checkPrimeV1(void){
    int n; int flag = 1;
    scanf("%d", &n);
    if(n >= 2){
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }if(flag == 1){
            printf("\n%d la so nguyen to", n);
        }else{
            printf("\n%d khong phai la so nguyen to", n);
            }
    }else{
        printf("\n%d khong phai la so nguyen to", n);
    }
}

//Source V2
void checkPrimeV2(int number, int flag0){
     if(number >= 2){
        for(int i = 2; i <= sqrt(number); i++){
            if(number % i == 0){
                flag0 = 0;
                break;
            }
        }if(flag0 == 1){
            printf("\n%d la so nguyen to", number);
        }else{
            printf("\n%d khong phai la so nguyen to", number);
            }
    }else{
        printf("\n%d khong phai la so nguyen to", number);
    }
}

//Source V3
//1
int checkPrimeV3(void){
    int number; int flag0 = 1;
    scanf("%d", &number);
    if(number >= 2){
        for(int i = 2; i <= sqrt(number); i++){
            if(number % i == 0){
                flag0 = 0;
                break;
            }
        }
    }
    return number;
}
//2
int checkFlagV3(void){
    int number; int flag0 = 1;
    if(number >= 2){
        for(int i = 2; i <= sqrt(number); i++){
            if(number % i == 0){
                flag0 = 0;
                break;
            }
        }
    }
    return flag0;
}
//Source V4
int checkPrimeV4(int number, int flag0){
    if(number >= 2){
        for(int i = 2; i <= sqrt(number); i++){
            if(number % i == 0){
                flag0 = 0;
                break;
            }
        }
    }
    return number;
}
int checkFlagV4(int number, int flag0){
    if(number >= 2){
        for(int i = 2; i <= sqrt(number); i++){
            if(number % i == 0){
                flag0 = 0;
                break;
            }
        }
    }
    return flag0;
}

