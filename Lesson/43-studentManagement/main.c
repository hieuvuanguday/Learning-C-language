#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
//43-studentManagement
//viết 1 chương trình menu
//nhiệm vụ quản lý sinh viên
//1 sinh viên được mô tả bằng các thuộc tính
//id, firstName, lastName, age, mark
//Menu gồm các chức năng sau
//1.thêm sinh viên vào danh sách
//2.tìm kiếm sinh viên dựa trên id
//3.tìm và xóa sinh viên khỏi danh sách theo id
//4.xuất ra danh sách sinh viên đạt điểm cao nhất
//5.sort theo điểm asc
//6.sort theo first asc
//7.quit
//mô tả chương trình:
//người dùng nhập số để chương trình phục vụ các chức năng
//nếu người dùng nhập sai số => chửi
//người dùng nhập đúng số, làm chức năng
//quay lại menu ép nhập tiếp
//nhập sai số nguyên => chửi
//nhập số 7 thì thoát
//nhập sinh mới mà id trùng với sinh viên có trong danh sách
//thì => chữi
const int MAX =  100;
void showMenu(void);
void addNewStudent(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int* size);
void printStudentList(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int size);
int searchStudentByID(char id[][MAX], int size, char keyID[MAX]);
void printStudent(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int pos);
void deleteStudentByID(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int* size, int pos);
void printHighestMarkStudentList(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int size);
void softStudentByMark(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int size);
void softStudentByFname(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int size);
int main()
{
    char id[MAX][11];
    char fname[MAX][15];
    char lname[MAX][15];
    int age[MAX];
    float mark[MAX];
    int size = 0;
    int choice;
    char buffer;
    //
    do{
        showMenu();
        do{
            fflush(stdin);
            printf("\nPut your choice: ");
            scanf("%d", &choice);
            scanf("%c", &buffer);
            if(buffer != 10) printf("\nDo U Know Input Integer? ");
        }while(buffer != 10);
        //

        switch(choice){
            case 1:{
                printf("\n1. Add new student");
                addNewStudent(id, fname, lname, age, mark, &size);
                break;
            }
            case 2:{
                printf("\n2. Search student by id");
                char keyID[MAX];
                printf("\nNhap ID mon tim: ");
                gets(keyID); fflush(stdin);
                int pos = searchStudentByID(id, size, keyID);
                printStudent(id, fname, lname, age, mark, pos);
                break;
            }
            case 3:{
                printf("\n3. Delete student by id");
                char keyID[MAX];
                printf("\nNhap ID mon tim: ");
                gets(keyID); fflush(stdin);
                int pos = searchStudentByID(id, size, keyID);
                if(pos != -1){
                    printStudent(id, fname, lname, age, mark, pos);
                    printf("\nThis student is deleted");
                    deleteStudentByID(id, fname, lname, age, mark, &size, pos);
                }
                break;
            }
            case 4:{
                printf("\n4. print highest mark student List");
                printHighestMarkStudentList(id, fname, lname, age, mark, size);
                break;
            }
            case 5:{
                printf("\n5. sort student by mark");
                softStudentByMark(id, fname, lname, mark, age, size);
                printStudentList(id, fname, lname, mark, age, size);
                break;
            }
            case 6:{
                printf("\n6. sort student by firstName");
                softStudentByFname(id, fname, lname, mark, age, size);
                printStudentList(id, fname, lname, mark, age, size);
                break;
            }
            case 7:{
                printf("\nSee U Again \3\3\3");
                break;
            }
            default:{
                printf("\nDo U Know Input 1->7 ? ");
                break;
            }
        }
    }while(choice != 7);
    return 0;
}

void softStudentByFname(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(strcmp(fname[i], fname[j]) > 0){
                //mark
                float markTmp = mark[i];
                mark[i] = mark[j];
                mark[j] = markTmp;
                //age
                int ageTmp = age[i];
                age[i] = age[j];
                age[j] = ageTmp;
                //id
                char strTmp[MAX];
                strcpy(strTmp, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], strTmp);
                //fname
                strcpy(strTmp, fname[i]);
                strcpy(fname[i], fname[j]);
                strcpy(fname[j], strTmp);
                //lname
                strcpy(strTmp, lname[i]);
                strcpy(lname[i], lname[j]);
                strcpy(lname[j], strTmp);
            }
        }
    }
}

void softStudentByMark(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(mark[i] > mark[j]){
                //mark
                float markTmp = mark[i];
                mark[i] = mark[j];
                mark[j] = markTmp;
                //age
                int ageTmp = age[i];
                age[i] = age[j];
                age[j] = ageTmp;
                //id
                char strTmp[MAX];
                strcpy(strTmp, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], strTmp);
                //fname
                strcpy(strTmp, fname[i]);
                strcpy(fname[i], fname[j]);
                strcpy(fname[j], strTmp);
                //lname
                strcpy(strTmp, lname[i]);
                strcpy(lname[i], lname[j]);
                strcpy(lname[j], strTmp);
            }
        }
    }
}

void printHighestMarkStudentList(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int size){
    if(size == 0){
        printf("\nNothing to print!");
        return;
    }
    float markMax = mark[0];
    for(int i = 0; i <= size - 1; i++){
        if(mark[i] > markMax) markMax = mark[i];
    }
    for(int i = 0; i <= size - 1; i++){
        if(markMax == mark[i]){
            printf("\n%-8s|%-10s|%-10s|%3d|%5.2f",
            id[i], fname[i], lname[i], age[i], mark[i]);
        }
    }
}

void deleteStudentByID(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int* size, int pos){
    if(pos == -1){
        printf("\nNothing to Delete");
        return;
    }
    for(int i = pos; i <= *size - 2; i++){
        strcpy(id[i], id[i + 1]);
        strcpy(fname[i], fname[i + 1]);
        strcpy(lname[i], lname[i + 1]);
        age[i] = age[i + 1];
        mark[i] = mark[i + 1];
    }
}

int searchStudentByID(char id[][MAX], int size, char keyID[MAX]){
    for(int i = 0; i <= size - 1; i++){
        if(strcmp(id[i], keyID) == 0) return i;
    }
    return -1;
}
void printStudent(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int pos){
    if(pos == -1){
         printf("\nNothing to print!");
         return;
    }
    printf("\n%-8s|%-10s|%-10s|%3d|%5.2f",
            id[pos], fname[pos], lname[pos], age[pos], mark[pos]);
}

void showMenu(void){
    printf("\n---------Student Management---------");
    printf("\n1. Add new student");
    printf("\n2. Search student by id");
    printf("\n3. Delete student by id");
    printf("\n4. print highest mark student List");
    printf("\n5. sort student by mark");
    printf("\n6. sort student by firstName");
    printf("\n7. quit");
}

void printStudentList(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int size){
    if(size == 0) printf("\nNothing to print!");
    else{
        for(int i = 0; i <= size - 1; i++){
            printf("\n%-8s|%-10s|%-10s|%3d|%5.2f",
                   id[i], fname[i], lname[i], age[i], mark[i]);
        }
    }
}

void addNewStudent(char id[][MAX], char fname[][MAX],
                   char lname[][MAX], int age[], float mark[],
                   int* size){
    printf("\nID: ");
    gets(id[*size]);
    fflush(stdin);
    printf("\nFirst Name: ");
    gets(fname[*size]);
    fflush(stdin);
    printf("\nLast Name: ");
    gets(lname[*size]);
    fflush(stdin);
    printf("\nAge: ");
    scanf("%d", &age[*size]);
    fflush(stdin);
    printf("\nMark: ");
    scanf("%f", &mark[*size]);
    fflush(stdin);
    (*size)++;
}
