#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
int strLen(char str[]);
void supperDivByKey(char str[], char key, int check);

int main()
{
    char str[MAX];
    char key;
    printf("\nNhap chuoi: ");
    gets(str);
    printf("\nNhap key:");
    scanf("%c", &key);
    int check = strLen(str);
    printf("\nMang ket qua: ");
    supperDivByKey(str, key, check);
    return 0;
}
void supperDivByKey(char str[], char key, int check){
    char tmp[MAX];
    int j = 0;
    for(int i = 0; i <= strLen(str); i++){
        if(str[i] != key){
            tmp[j] = str[i];
            j++;
        }else if(str[i] == key){
            tmp[j] = 0;
            printf("\n\"%s\"", tmp);
            j = 0;
        }
        if(i == check){
            printf("\n\"%s\"", tmp);
        }
    }
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != 0) i++;
    return i;
}
