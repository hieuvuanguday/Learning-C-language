#include <stdio.h> //khai báo thư viện
#include <stdlib.h> //import (java, js)
//comment: ghi chú
//hàm main, main function
//công nghệ thông tin
//xử lý thông tin (data/value) bằng công nghệ
//kí tự '1' khác số 1
//số 12 được biểu diễn bằng 2 kí tự '1' và '2'

//datatype: kiểu dữ liệu
//ký tự      char     character              1byte
//số nguyên  int      integer <in-tơ-dơ>     4byte
//số thực    float    float                  4byte
//số thực    double   long float(dô-bồ)      8byte

int main() //dấu nhắc hệ args

{
    //lưu trữ thông tin
    //lưu kí tự đầu tiên trong tên của bạn đi
    //data/value như nước muốn hứng cần ly (variable-biến)
    //mình muốn lưu gì thì RÓT vào ly

    //khi đặt tên biến:
    //không bắt đầu bằng số
    //cú pháp camelCase
    //không kí tự đặc biệt
    //_ và $ là ngoại lệ (access modifile)
    //tên biến phải đại diện cho thứ đang chứa

    //tạo biến kiểu dữ kiệu là char tên là firstCharOfName
    //kí tự 'd' được rót vào biến firstCharOfName
    //= : asignment operator - pháp gán, phép rót
    char firstCharOfName = 'd';
    //lưu tuổi của bạn đi
    int age = 23;
    //lưu điểm của bạn đi
    float mark = 6.5;
    double score = 9.9;
    //xuất ra màn hình
    //printf("string") hàm function //format
    printf("chu cai dau tien trong ten cua tui la %c", firstCharOfName);
    //hardcode: code đúng lúc này sai lúc khác
    //softcode: code mềm
    printf("\ntuoi cua tui la %i", age);
    printf("\ntuoi cua tui la %d", age);
    //denote decimal digital
    printf("\ndiem cua tui la %.2f", mark);

    //những cái bất ổn
    int num = 'A';
    //char và int có thể log ra màn hình bằng %c và %d
    //ASCII

    //
    printf("\ndia chi cua bien age la $u", &age);
    printf("\ndia chi cua bien mark la $u", &mark);
    //
    //cho 2 biến số nguyên có giá trị bất kì, tính tổng 2 số
    //Input Process Output ( I P O )
    //Input: tiếp nhận giá trị
    //Process: xử lý yêu cầu, tính toán kết quả
    //Output: xuất ra màn hình kết quả cảu yêu cầu
    //Input:
    int numb1 = 10;
    int numb2 = 3;
    float result;//có thể là 0 hoặc là rác
    //Process: ép kiểu : drift con trỏ
    result = (float)numb1/(float)numb2;
    //Output:
    printf("\n%d=%d=%d", numb1, numb2,result);

    //swag: hoán vị
    //cho 2 biến số nguyên chứa hai giá trị bất kì
    //hoán vị giá trị trong hai biến này
    //I
    int number1 = 10;
    int sting = 12;
    //P
    /*tmp = number1;
    number1 = sting;
    sting = tmp;*/
    //
    number1 = number1 + sting;
    sting = number1 - sting;
    number1 = number1 - sting;
    //O
    printf("\nnumber1 = %d, sting = %d", number1, sting);
    return 0; //function: hàm

}
