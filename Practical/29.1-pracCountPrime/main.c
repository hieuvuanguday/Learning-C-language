#include <stdio.h>
#include <stdlib.h>
void swapValue(int* st, int* ed);
int checkFlag(int num);
int main()
{
    printf("\nDay la cong cu tra so nguyen to trong khoang ! ");
    int start, end; int buffer1; char buffer2;
    printf("\nNhap Start : ");
    scanf("%d", &start);
    printf("\nNhap End : ");
    scanf("%d", &end);
    printf("\nCac so nguyen to trong khoang la : ");
    swapValue(&start, &end);
    for(int num = start; num <= end; num++){
        if(checkFlag(num) == 1){
            printf("%5d", num);
        }
    }
    return 0;
}

void swapValue(int* st, int* ed){
    if(st > ed){
        *st += *ed;
        *ed = *st - *ed;
        *st = *st - *ed;
    }
}
int checkFlag(int num){
    if(num >= 2){
        for(int i = 2; i <= sqrt(num); i++){
            if(num % i == 0){
                return 0;
            }
        }return 1;
    }else{
        return 0;
    }
}


