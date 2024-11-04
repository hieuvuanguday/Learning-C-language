#include <stdio.h>
#include <stdlib.h>
//27.1-pracToCalculateArea
void calcuAreaV1(void);
//
void calcuAreaV2(int width, int height);
//
int calcuAreaV3(void);
//
int calcuAreaV4(int width, int height);
//
int main()
{
    /*DEMO main
    printf("\nNhap vao 2 canh cua HCM !");
    int w, h;
    printf("\nChieu dai : ");
    scanf("%d", &w);
    printf("\nChieu rong : ");
    scanf("%d", &h);
    printf("\nDien tich la : %d\n", w*h);
    */

    /*DEMO V1
    calcuAreaV1();
    */

    /*DEMO V2
    printf("\nNhap vao 2 canh cua HCM !");
    int w, h;
    printf("\nChieu dai : ");
    scanf("%d", &w);
    printf("\nChieu rong : ");
    scanf("%d", &h);
    calcuAreaV2(w, h);
    */

    /*DEMO V3
    int s = calcuAreaV3();
    printf("\nDien tich la : %d\n", s);
    */

    //DEMO V4
    printf("\nNhap vao 2 canh cua HCM !");
    int w, h;
    printf("\nChieu dai : ");
    scanf("%d", &w);
    printf("\nChieu rong : ");
    scanf("%d", &h);
    int s = calcuAreaV4(w, h);
    printf("\nDien tich la : %d\n", s);
    return 0;
}

//Source V1
void calcuAreaV1(void){
    printf("\nNhap vao 2 canh cua HCM !");
    int width, height;
    printf("\nChieu dai : ");
    scanf("%d", &width);
    printf("\nChieu rong : ");
    scanf("%d", &height);
    printf("\nDien tich la : %d\n", width*height);
}

//Source V2
void calcuAreaV2(int width, int height){
    printf("\nDien tich la : %d\n", width*height);
}

//Source V3
int calcuAreaV3(void){
    printf("\nNhap vao 2 canh cua HCM !");
    int width, height;
    int Tich = 0;
    printf("\nChieu dai : ");
    scanf("%d", &width);
    printf("\nChieu rong : ");
    scanf("%d", &height);
    Tich = width*height;
    return Tich;
}

//Source V4
int calcuAreaV4(int width, int height){
    int Tich = 0;
    Tich = width*height;
    return Tich;
}
