#include <stdio.h>
#include <stdlib.h>
//14-delBuffer
//xoa bo nho dem
int main()
{
    int age = 0;
    char name;
    printf("\nAge : ");
    scanf("%d", &age);
    fflush(stdin);
    printf("\nName : ");
    scanf("%c", &name);

    printf("\nage = %d", age);
    printf("\name = %c", name);
    return 0;
}
