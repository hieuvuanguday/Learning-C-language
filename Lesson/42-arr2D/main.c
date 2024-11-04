#include <stdio.h>
#include <stdlib.h>
// 42-arr2D
int main()
{
    int arr[3][5] = {
                        {1,3,5,2,7},
                        {4,9,8,0,2},
                        {8,4,1,5,3}
                    };
    //printf("\n%d", arr[1][3]);
    //printf("\n%d", arr[1]);
    //printf("\n%d", &arr[1][0]);
    //
    char nameList[4][100];
    strcpy(nameList[0], "Le Ho Diep");
    strcpy(nameList[1], "Do The Hieu");
    strcpy(nameList[2], "Nguyen Thanh Nhan");
    strcpy(nameList[3], "Lai Nguyen Minh Quan");
    for(int i = 0; i <= 3; i++){
        printf("\n%s", nameList[i]);
    }
    return 0;
}
