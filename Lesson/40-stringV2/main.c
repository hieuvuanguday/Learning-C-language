#include <stdio.h>
#include <stdlib.h>
//40-String
const int MAX = 100;
int strLength(char str[]);
//FindfirstIndex
int charInStr(char str[], char key);
//strInStr
int strInStr(char str[], char sub[]);
//checkAnna
int checkAnna(char arr[]);
//deleteIndex: xóa phần tử dựa vào index
void deleteIndex(char str[], int pos, int noOfNum);
//Xóa nhiều phần tử
voiddeleteAllInString(char str[], char sub[]);
//Nhét thêm một chuỗi vào chuỗi
void insertIndex(char str[], char sub[], int pos);
//Xóa phần tử trong mảng dựa vào key
void deleteKey(char str[], int* size, char key);
//Sắp xếp
void softStr(int str[], int size);
//XÓa phần tử trùng lặp
void removeDup(char str[], int* size);
int main()
{
    char str[MAX];
    printf("\nNhap chuoi: ");
    gets(str);
    printf("\nChuoi: \"%s\"", str);
    int size = strLength(str);
    //printf("\nLength: %d", strLength(str));

    //deleteIndex(str, 2, 3);

    //int check = checkAnna(str);
    //printf("\n%d", check);

    //deleteKey(str, &size, 'n');

    softStr(str, size);

    //removeDup(str, &size);
    printf("\nChuoi sau: \"%s\"", str);
    return 0;
}
//Hàm xóa phần tử trùng lặp
void removeDup(char str[], int* size){
    for(int i = 0; i <= *size -  2; i++){
        for(int j = 0; j <= *size - 1; j++){
            if(str[i] == str[j]){
                for(int h = j; h <= *size - 2; h++){
                    str[h] = str[h + 1];
                }
                (*size)--;
            }

        }
    }
}
//Hàm sắp xếp
void softStr(int str[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int h = i + 1; h <= size - 1; h++){
            if(str[i] > str[h]){
                char tmp = str[i];
                str[i] = str[h];
                str[h] = tmp;
            }
        }
    }
}

//Nhét chuỗi vào chuỗi
void insertIndex(char str[], char sub[], int pos){
    int len = strLength(str);
    for(int i = strLength(str) - 1; i >= pos; i--){
	str[i + strLength(sub)] = str[i];
    }
    str[len + strLength(sub)] = 0;
    for(int i = 0; i <= strLength(sub) - 1; i++){
	str[pos] = sub[i];
	pos++;
    }
}
//Hàm xóa phần tử trong mảng dựa vào key
void deleteKey(char str[], int* size, char key){
    for(int i = 0; i <= *size - 1; i++){
        if(str[i] == key){
            for(int h = i; h <= *size - 2; h++){
                str[h] = str[h + 1];
            }
            (*size)--;
            i--;
        }
    }
    str[*size] = 0;
}

//Xóa chuỗi trong chuỗi
voiddeleteAllInString(char str[], char sub[]){
    int pos;
    do{
        pos = strInStr(str, sub);
        if(pos != -1){
            deleteIndex(str, pos, strLength(sub));
        }
    }while(pos != -1);
}

//Hàm xóa phần tử ở index
void deleteIndex(char str[], int pos, int noOfNum){
    int len = strLength(str);
    for(int i = pos + noOfNum; i <= strLength(str) - 1; i++){
        str[i - noOfNum] = str[i];
    }
    str[len - noOfNum] = 0;
}

//Hàm check Anna
int checkAnna(char str[]){
    for(int i = 0; i <= (strLength(str)/2) -  1; i++){
        if(str[i] != str[strLength(str)  - 1 - i]) return -1;
    }
    return 1;
}

//Hàm tìm chuỗi trong chuỗi
int strInStr(char str[], char sub[]){
    for(int i = 0; i <= strLength(str) - 1; i++){
        if(str[i] == sub[0]){
            int tmp = 1;
            for(int j = 0; j <= strLength(sub) - 1; j++){
                if(str[tmp] != sub[j]) break;
                tmp++;
                if(j == strLength(sub) - 1) return i;
            }
        }
    }
    return -1;
}

//Hàm tìm vị trí đầu tiên của key
int charInStr(char str[], char key){
    for(int i = 0; i <= strLength(str) - 1; i++){
        if(str[i] == key) return 1;
    }
    return -1;
}

//Hàm tính độ dài chuỗi
int strLength(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
