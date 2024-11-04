#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
int findStringInString(char str1[], char str2[]);
int strLen(char str[]);
int main()
{
    char str1[MAX];
    printf("\nNhap chuoi 1: ");
    gets(str1);
    char str2[MAX];
    printf("\nNhap chuoi 2: ");
    gets(str2);
    int result = findStringInString(str1, str2);
    printf("\nKet qua: %d", result);
    return 0;
}
int findStringInString(char str1[], char str2[]){
    for(int i = 0; i <= strLen(str1) - 1; i++){
        int flag = 1;
        if(str1[i] == str2[0]){
                int tmp = i;
            for(int j = 0; j <= strLen(str2) - 1; j++){
                if(str1[tmp] != str2[j]){
                    flag = 0;
                    break;
                }
                else tmp++;
            }
            if(flag == 1) return i;
        }
    }
    return -1;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != 0) i++;
    return i;
}
