#include <stdio.h>
#include <stdlib.h>

int main()
{
    //I
    char alp;
    char buffer;
    //P
    do{
        printf("nhap vao mot ki tu trong khoang 'a'-'z' : ");
        scanf("%c", &alp);
        scanf("%c", &buffer);
        fflush(stdin);
    }while(alp > 'z' || alp < 'a' || buffer != 10);
    //O
    printf("\n\t%c\t%d\t%04o", alp, alp, alp);
    return 0;
}
