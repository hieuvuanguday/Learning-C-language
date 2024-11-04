#include <stdio.h>
#include <stdlib.h>
//26-toUpperCase
//V1 void f void
void upperCaseV1(void);
//V2 void f (char)
void upperCaseV2(char character);
//V3 char f (void)
char upperCaseV3(void);
//V4
char upperCaseV4(char character);
int main()
{
    /*DEMO main
    char ch;
    printf("\nNhap vao 1 ky tu: ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
    }
    printf("\nSau khi viet hoa la %c", ch);
    */

    /*DEMO V1
    upperCaseV1();
    */

    /*DEMO V2
    char ch;
    printf("\nNhap vao 1 ky tu: ");
    scanf("%c", &ch);
    fflush(stdin);
    upperCaseV2(ch);
    */

    /*DEMO V3
    char ch = upperCaseV3();
    printf("\nCh = %c", ch);
    */

    /*DEMO V4
    char ch;
    printf("\nNhap vao mot ki tu : ");
    scanf("%c", &ch);
    ch = upperCaseV4(ch);
    printf("%c", ch);
    */

    return 0;
}
char upperCaseV4(char ch){
    fflush(stdin);
    if(ch < 'z' && ch > 'a'){
        ch -= 32;
    }
    return ch;
}
char upperCaseV3(void){
    char ch;
    printf("\nNhap vao 1 ky tu: ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
    }
    return ch;
}

void upperCaseV2(char character){
    if(character >= 'a' && character <= 'z'){
        character = character - 32;
    }
    printf("\nSau khi viet hoa la %c", character);
}

void upperCaseV1(void){
    char ch;
    printf("\nNhap vao 1 ky tu: ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
    }
    printf("\nSau khi viet hoa la %c", ch);
}


//27 - nhập vào 2 cạnh width & height
//tinh dien tich HCN (làm bằng 4 kiểu))
//(ngoài main dùng ư - h, ngoài main dùng width với height)

//28 - làm lại checkPrime
// nhưng làm bằng 4 kiểu hàm
//(ngoài main dùng n, trong hàm thì dùng number)
