#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char name;
    printf("\nNhap Age : ");
    scanf("%d", &age);
    fflush(stdin);
    printf("\nNhap Name : ");
    scanf("%c", &name);

    printf("\nage = %d", age);
    printf("\nname = %c", name);
    return 0;
}
