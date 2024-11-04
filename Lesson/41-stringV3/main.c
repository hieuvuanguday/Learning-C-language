#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
const int MAX = 100;
//41-stringV3
//Bonus2: revWord đảo ngược từ
//"xin chao anh" => "anh chao xin"
int strLength(char str[]);
void revWord(char str[]);
//Trim
void trim(char str[]);
void deleteIndex(char str[], int pos, int num);
int main()
{
    char str[MAX];
    printf("\nNhap str: ");
    gets(str);
    //revWord(str);
    trim(str);
    printf("\nStr ne: \"%s\"", str);
    return 0;
}
void trim(char str[]){
    for(int i = 0; i <= strLength(str) - 1; i++){
        if(str[i] == ' ' && str[i + 1] == ' '){
            deleteIndex(str, i, 1);
            i--;
        }
    }
    if(str[0] == 32) deleteIndex(str, )
}

void deleteIndex(char str[], int pos, int num){
    int len = strLength(str);
    for(int i = pos + num; i <= strLength(str) - 1; i++){
        str(i - num) = str[i];
    }
    str[len - num] = 0;
}

void revWord(char str[]){
    int pos = strLength(str) - 1;
    char strTmp[MAX];
    int sizeTmp = 0;
    strTmp[0] = 0;
    char strResult[MAX];
    strResult[0] = 0;

    while(pos >= 0){
        sizeTmp = 0;
        for(int i = pos; i >= 0; i--){
            if(str[i] == ' '){
                pos--;
                break;
            }else{
                pos--;
                strTmp[sizeTmp] = str[i];
                sizeTmp++;
            }
        }
        strTmp[sizeTmp] = 0;
        strrev(strTmp);
        strcat(strResult, strTmp);
        strcat(strResult, " ");
    }
    strcpy(str, strResult);
    str[strLength(str) - 1] = 0;
}
int strLength(char str[]){
    int i = 0;
    while(str[i] != 0) i++;
    return i;
}
