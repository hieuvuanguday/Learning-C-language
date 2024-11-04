#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    int flag = 1;
    do{
        printf("\nNhap vao mot so bat ky : ");
        scanf("%f", &n);
        int test = n;
        if(test == n){
            if(test >= 2){
                for(int i = 2; i <= n - 1; i++){
                    if(test % i == 0){
                        flag = 0;
                        break;
                    }
                }
                if(flag == 0){
                    printf("\n%.0f khong phai so nguyen to\n", n);
                }else if(flag == 1){
                    printf("\n%.0f la so nguyen to\n", n);
                }
            }else{
                printf("\n%.0f khong phai so nguyen to\n", n);
            }
        }else if(test != n){
            printf("\n%f khong phai khong la so nguyen to\n", n);
        }
        flag = 1;
    }while(n != 0);
    printf("\n\t\tEND\n");
    return 0;
}
