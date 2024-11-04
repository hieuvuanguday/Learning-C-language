#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alp;
    printf("\nNhap mot ki tu bat ki : ");
    scanf("%c", &alp);
    fflush(stdin);
    if(alp >= 'a' && alp <= 'z'){
        alp-=32;
    }
    printf("\n\t\t\t\t%c\n", alp);
    return 0;
}
