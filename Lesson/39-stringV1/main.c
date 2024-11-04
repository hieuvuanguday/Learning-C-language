#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
int strLength(char str[]);
//39-String-chuỗi
//Chuỗi là mảng (con trỏ)
//Là một mảng không lưu số mà lưu kí tự
void strCpy(char str1[], char str2[]);
//copy chuỗi 2 vào chuỗi 1
//copy str2 -> str1
//strCpy
void strConcat(char str1[], char str2[]);
//concat: nối chuỗi: nối 2 chuỗi với nhau
//strConcat
void strReverse(char str[]);
//reverseStr
void strCmp(int str1[], int str2[]);
//strCmp
void strDiv(int str1[], int str2[], int pos);
//strDiv
int main()
{
    char str1[MAX];
    char str2[MAX];
    printf("\nNhap chuoi 1: ");
    gets(str1);
    fflush(stdin);
    printf("\nNhap chuoi 2: ");
    gets(str2);
    fflush(stdin);

    /*strCpy(str1, str2);*/

    /*strConcat(str1, " ");
    strConcat(str1, str2);*/

    strReverse(str1);
    strReverse(str2);
    printf("\nChuoi 1: \"%s\"", str1);
    printf("\nChuoi 2: \"%s\"", str2);
    return 0;
}
int strLength(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
void strCpy(char str1[], char str2[]){
    int size1 = 0;
    for(int i = 0; i <= strLength(str2) - 1; i++){
        str1[size1] = str2[i];
        size1++;
    }
    str1[size1] = '\0';
}
void strConcat(char str1[], char str2[]){
    int size1 = strLength(str1);
    for(int i = 0; i <= strLength(str2) - 1; i++){
        str1[size1] = str2[i];
        size1++;
    }
    str1[size1] = '\0';
}
void strReverse(char str[]){
    for(int i = 0; i <= (strLength(str)/2) - 1; i++){
        char tmp = str[i];
        str[i] = str[strLength(str) - 1 - i];
        str[strLength(str) - 1 - i] = tmp;
    }
}

