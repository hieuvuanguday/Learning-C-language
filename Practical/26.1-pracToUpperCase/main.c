#include <stdio.h>
#include <stdlib.h>
//26.1-pracToUpperCase
//Function
void upperCaseV1(void);
void upperCaseV2(char);
char upperCaseV3(void);
char upperCaseV4(char);
//

int main()
{
    /*DEMO Main
    char ch;
    printf("\nNhap vao mot ki tu : ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch < 'z' && ch > 'a'){
        ch -= 32;
    }
    printf("%c\n", ch);
    */

    /*DEMO V1
    upperCaseV1();
    */

    /*DEMO V2
    char ch;
    printf("\nNhap vao mot ki tu : ");
    scanf("%c", &ch);
    upperCaseV2(ch);
    */

    //DEMO V3
    char ch = upperCaseV3();
    printf("%c", ch);

    /*DEMO V4
    char ch;
    printf("\nNhap vao mot ki tu : ");
    scanf("%c", &ch);
    ch = upperCaseV4(ch);
    printf("%c", ch);
    */

    return 0;
}
//Source V1
void upperCaseV1(void){
    char ch;
    printf("\nNhap vao mot ki tu : ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch < 'z' && ch > 'a'){
        ch -= 32;
    }
    printf("%c\n", ch);
}
//Source V2
void upperCaseV2(char ch){
    fflush(stdin);
    if(ch < 'z' && ch > 'a'){
        ch -= 32;
    }
    printf("%c\n", ch);
}
//Source V3
char upperCaseV3(void){
    char character;
    printf("\nNhap vao mot ki tu : ");
    scanf("%c", &character);
    fflush(stdin);
    if(character < 'z' && character > 'a'){
        character -= 32;
    }
    return character;
}
//Source V4
char upperCaseV4(char ch){
    fflush(stdin);
    if(ch < 'z' && ch > 'a'){
        ch -= 32;
    }
    return ch;
}
