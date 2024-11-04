#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
int strLen(char str[]);
void insertString(char str[], char strResult[], int start, int end);
int main()
{
    int start, end;
    char str[MAX];
    printf("\nNhap Chuoi: ");
    gets(str);
    printf("\nChuoi : \"%s\"", str);
    printf("\nNhap Start: ");
    scanf("%d", &start);
    printf("\nNhap End: ");
    scanf("%d", &end);
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    char strResult[end - start + 1];
    insertString(str, strResult, start, end);
    printf("\nChuoi ban dau: \"%s\"", str);
    printf("\nChuoi ket qua: \"%s\"", strResult);
    return 0;
}
void insertString(char str[], char strResult[], int start, int end){
    int j  = 0;
    for(int i = start; i <= end; i++){
        strResult[j] = str[i];
        j++;
    }
}

int strLen(char str[]){
    int i = 0;
    while( str[i] != 0) i++;
    return i;
}
