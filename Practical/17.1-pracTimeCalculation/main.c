#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h = 0;
    int m = 0;
    int s;
    printf("\nNhap so giay : ");
    scanf("%d", &s);
    if(s > 3600){
        h = s / 3600;
        s%=3600;
    }if(s > 60){
        m = s / 60;
        s%=60;
    }
    printf("\n\t %02d:%02d:%02d\n", h, m, s);
    return 0;
}
