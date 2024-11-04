#include <stdio.h>
#include <stdlib.h>
//29-CountPrime
//nhập vào Start, End
//kiểm tra xem trong khoảng có số nguyên tố không
//nếu có in ra
int checkPrime(int number);
int main()
{
    int start, end;
    printf("\nNhap start : ");
    scanf("%d", &start);
    printf("\nNhap end : ");
    scanf("%d", &end);

    if(start > end){
        start+=end;
        end = start - end;
        start = start - end;
    }
    printf("\nSo nguyen to trong khoang la : \n");
    for(int n = start; n <= end; n++){
        if(checkPrime(n) == 1){
            printf("%5d", n);
        }
    }
    return 0;
}
int checkPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= sqrt(number); i++){
            if(number % i == 0){
                return 0;
            }
        }return 1;
    }else{
        return 0;
    }
}
