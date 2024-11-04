#include <stdio.h>
#include <stdlib.h>
//nhap vao 1 so N, tao ra mot mang co N phan tu
//Nhap gia tri cho N phan tu, sau do in ra man hinh cac gtri do
void inputArray(int array[], int* size);
const int MAX = 100;
int main()
{
    int size;
    int arr[MAX];
    inputArray(arr, &size);

    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
    return 0;

}
void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc mang: ");
    scanf("%d", size);
    for(int i = 0; i <=*size  - 1 ; i++){
        printf("\nArr[%d] n: ", i);
        scanf("%d", &array[i]);
    }
}
