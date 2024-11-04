#include <stdio.h>
#include <stdlib.h>
//02-ìElse
int main()
{
    //syntax if esle
    /*
    condition clause: menh de dieu kien
    command: cau lenh
            if(condition clause){
                    command;
            }
            comparison operator: toán tử so sánh
            == bằng
            != khác
            > < >= <=
        */
        int car = 7;
        //anh lai xe di Da Lat
        //Neu nhu xe cua anh co tu 7 nguoi tro len thi di deo pren
        //neu nhu xe cua anh co dung 7 nguoi thi di dieu sacom
        //neu nhu xe cua anh khong thoa cac dieu kien tren
        //thi di deo MImosa
        if(car >= 7){
            printf("\nDi deo Pren");
        }else if(car == 7){
            printf("\nDi deo Sacom");
        }else{
            printf("\nDi deo MImosa");
        }
        //logical operator: toán tử logic
        //AND
        //&: chạy cho bằng hết, nhìn lại có false => mệnh đề lớn false
        //  không có false => mệnh đề lớn True
        //&&: luôn đi tìm false, gặp false ngừng => mệnh đề lớn false
        //  tìm không có false =>  mẹnh đề lớn True
        //OR
        //|: chạy cho bằng hết, nhìn lại có True => cả mệnh đề lớn True
        //  không có True => cả mệnh đề False
        //||: luôn đi tìm True, có True => mệnh đề lớn True
        //  không tìm được True => mệnh đề lớn False
        //Mathematic operator: toán tử toán học
        //+ - * / % += *= /= ++
        //int b = 5;
        //b++ || b+=1 || b = b + 1;

        int a = 10;
        int b = 5;
        if(a < 10 && b++ > 2){
            printf("\nTrue a = %d, b = %d", a, b);
        }else{
            printf("\nFalse a = %d, b = %d", a, b);
        }
    return 0;
}
