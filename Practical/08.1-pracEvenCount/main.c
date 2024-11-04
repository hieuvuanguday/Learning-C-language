#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nDay la cong cu tim so chan");
    int start, end;
    printf("\nNhap Strart : ");
    scanf("%d", &start);
    printf("\nNhap End : ");
    scanf("%d", &end);
    if(start > end){
        int lmp;
        lmp = start;
        start = end;
        end = lmp;
    }
    int count = 0;
    int s = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf("%5d", i);
            s = s + i;
            count = count + 1;
        }
    }
    printf("\nCo %d so chan", count);
    printf("\nTong cac so chan = %d", s);
    return 0;
}
