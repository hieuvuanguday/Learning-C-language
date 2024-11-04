#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    int tmp = 0;
    int countOdd = 0;
    int countEven = 0;
    printf("\nNhap Start : ");
    scanf("%d", &start);
    printf("\nNhap End : ");
    scanf("%d", &end);
    if(start > end){
       tmp = start;
       start = end;
       end = tmp;
    }
    int sum = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            sum = sum + i;
            countOdd +=1;
        }else{
            countEven += 1;
        }
    }
    printf("\nTong cac so le la : %d", sum);
    if(countOdd > countEven){
        printf("\nSo cac so le > So cac so chan");
    }else if(countOdd < countEven){
        printf("\nSo cac so le < So cac so chan");
    }else{
        printf("\nSo cac so le = So cac so chan");
    }
    return 0;
}
