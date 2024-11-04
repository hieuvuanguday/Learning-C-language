#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nChao anh ban");
    for(int i = 0; i < 10; i++){
        int m;
        printf("\nVui long nhap so ban muon kiem tra : ");
        scanf("%d", &m);
        if(m % 2 == 0){
            printf("\nDay la so chan");
        }else{
        printf("\nDay la so le");}
    }
    printf("\nDa het luot dung thu, vui long nap V.I.P");
    return 0;
}
