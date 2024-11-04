#include <stdio.h>
#include <stdlib.h>
//32-inputOutputArray
//tạo mảng (primitive - nguyên thủy - không co giãn được)
//nhập mảng và xuất mảng ra màn hình bằng hàm
const int MAX = 100;//readOnly không sửa được
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int main()
{
    //nhập
    int array[MAX];
    int size;
    inputArray(array, &size);
    //xuất
    printf("\nMang la: ");
    outputArray(array, size);
    return 0;
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
void inputArray(int array[], int* size){
    printf("\nMoi nhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]= ", i);
        scanf("%d", &array[i]);
    }
}
