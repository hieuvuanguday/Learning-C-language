#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 0; i<10; i++){
        printf("\nDay la cong cu giai tam thuc bac 2\n");
        float a,b,c;
        printf("\nNhap a: ");
        scanf("%f", &a);
        printf("\nNhap b: ");
        scanf("%f", &b);
        printf("\nNhap c: ");
        scanf("%f", &c);
        if(a == 0 ){
            if(b == 0){
                if(c == 0){
                    printf("\nPhuong trinh co vo so nghiem");
                }else{
                    printf("\nPhuong trinh vo nghiem");}

            }else{
                printf("\nPhuong trinh co duy nhat mot nghiem %.3f ", -c/b);}
        }else{
            if(pow(b,2)-4*a*c > 0){
            printf("\nPhuong trinh co hai nghiem phan biet \nx1 : %.3f \nx2 : %,3f", (-b-(sqrt(pow(b,2)-4*a*c))/(2*a)), (-b+(sqrt(pow(b,2)-4*a*c))/(2*a)));
            }else if(pow(b,2)-4*a*c == 0){
            printf("\nPhuong trinh co cap nghiem kep la x1 = x2 = %.3f", (-b)/(2*a));
            }else if(pow(b,2)-4*a*c < 0){
            printf("\nPhuong trinh vo nghiem");}}
    }printf("\nDa het 10 lan dung thu !! \nVui long nap V.I.P de dung khong gioi han");
    return 0;
}
