#include <stdio.h>
#include <stdlib.h>
//16-doWhile-While
int main()
{
    //Loop
    //for
    //do while
    //syntax
    //do{
    //  command block
    //}while(condition clause);
    /*
    int i = 1;
    do{
        printf("\n%d", i);
        i++;
    }while(i ==10);
    printf("\n%d", i);
    */
    //while
    //syntax
    //while(condition clause){
    //  command block
    //}
    //boolean: true/ false
    int number;
    char buffer;
    do{
        fflush(stdin);
        printf("\nNhap so nguyen dich thuc : ");
        scanf("%d", number);
        scanf("%c", buffer);
        fflush(stdin);
        if(buffer != 10){
            printf("\nGa, nhap lai di");
        }
    }while(buffer != 10);
    return 0;
}
