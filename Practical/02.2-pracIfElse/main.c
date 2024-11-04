#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nChao anh ban dep chai ");
    for(int i = 0; i < 10; i++)
    {
        float a, b, c;
        printf("\nNhap a di anh ban : ");
        scanf("%f", &a);
        printf("\nNhap b di anh ban : ");
        scanf("%f", &b);
        printf("\nNhap c di anh ban : ");
        scanf("%f", &c);
        if(a + b > c && a + c > b && b + c > a)
        {
            if(a == b || b == c || c== a)
            {
                if(a == b && b ==c )
                {
                    printf("\nDay la tam giac deu");
                }
                else if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(c,2) + pow(b,2) == pow(a,2))
                {
                    printf("\nDay la tam giac vuong can");
                }
                else
                {
                    printf("\nDay la tam giac can");
                }
            }
            else if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(c,2) + pow(b,2) == pow(a,2))
            {
                printf("\nDay la tam giac vuong");
            }
            else
            {
                printf("\nDay la tam giac thuong");
            }
        }
        else
        {
            printf("\nDay khong phai la tam giac");
        }
    }
    printf("\nDa het 10 lan dung thu. Vui long nap V.I.P de dung vinh vien");
    return 0;
}
