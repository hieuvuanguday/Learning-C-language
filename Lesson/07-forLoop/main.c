#include <stdio.h>
#include <stdlib.h>
//07-forLoop
int main()
{
    /*syntax
        for(khởi đầu; điều kiện thoát; bước nhảy{
            //command block
        }
    */
    for(int i = 1; i <= 3; i+=2){
        printf("\n%d Do The Hieu", i);
    }
    //infinity loop (vòng lặp vô tận)
    //không có bước nhảy, điều kiện luôn đúng
    return 0;
}
