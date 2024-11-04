#include <stdio.h>
#include <stdlib.h>
//Giải phương trình bậc 2
//nhập vào 3 số thực a b c nằm trong biểu thức bậc 2
//Ax^2 + Bx + C = 0
//nhiệm vụ: giả lập máy tính fx570plus
// pow(x,2)
//sqrt(x) => pow(x, (float)1/2)
int main()
{
    float a,b,c;
    printf("\nInput a:");
    scanf("%f", &a);
    printf("\nInput b:");
    scanf("%f", &b);
    printf("\nInput c:");
    scanf("%f", &c);
    if(a == 0 ){
            if(b == 0){
                if(c == 0){
                    printf("\nPhuong trinh vo so nghiem");
                }else{
                    printf("\nPhuong trinh vo nghiem");}
            }else{
                printf("\nNghiem cua phuong trinh la %.3f", -c/b);}
    }else{
        float delta = pow(b,2)-4*a*c;
        if(delta < 0){
            printf("\nPhuong trinh Vo nghiem");
        }else if(delta = 0){
            float x1 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
            float x2 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
            printf("\nPhuong trinh co nghiem kep %.3f = %.3f", x1, x2);
        }else if(delta > 0){
            float x1 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
            float x2 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
            printf("\nPhuong trinh co 2 nghiem phan biet %.3f, %.3f", x1, x2);
        }

    }
    return 0;
}

