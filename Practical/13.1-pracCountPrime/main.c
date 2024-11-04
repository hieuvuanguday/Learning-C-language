#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    int count = 0;
    int result = 0;
    printf("\nNhap Start : ");
    scanf("%d", &start);
    printf("\nNhap End : ");
    scanf("%d", &end);
    if(start > end){
        start = start + end;
        end = start - end;
        start = start - end;
    }
    for(int num = start; num <=end; num++){
        int flag = 1;
        if(num >= 2){
            for(int i = 2; i <= num-1; i++){
                if(num % i == 0){
                    flag = 0;
                    break;
                }
            }if(flag == 1){
                printf("%5d", num);
                count+=1;
                result+=num;
            }
        }
    }
    printf("\nCo %d so nguyen to trong khoang", count);
    printf("\nTong cac so nguyen to trong khoang la %d", result);
    return 0;
}

