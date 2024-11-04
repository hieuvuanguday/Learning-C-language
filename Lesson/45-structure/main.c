#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
//45-Structure: cấu trúc
//              kiểu dử liệu cấu trúc
//              kiểu dữ liệu do người dùng tự đinh nghĩa
//              kiểu dữ liệu do người dùng tạo ra
//Primitive data type: kiểu dữ liệu nguyên thủy
struct Student{
    char id[11];
    char name[40];
    int age;
    float mark;
};
void addNemStudent(struct Student studentList[], int* size);
int main()
{
    struct Student hieu;
    struct Student studenList[100];
    int size = 0;
    strcpy(hieu.id, "SE170041");
    strcpy(hieu.name, "Do The Hieu");
    hieu.age = 18;
    hieu.mark = 8.5;

    printf("%s|%s|%d|%f", hieu.id, hieu.name, hieu.age, hieu.mark);
    return 0;
}
void addNemStudent(struct Student studentList[], int* size){
    printf("\nNew name: ");
    gets(studentList[*size],name); fflush(stdin);
}
