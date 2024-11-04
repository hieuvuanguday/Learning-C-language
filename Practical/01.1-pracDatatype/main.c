#include <stdio.h>
#include <stdlib.h>

int main()
{
    //gán giá trị cho biến
    char firstCharOfName = 'H';
    int age = 18;
    float mark = 6.0;
    double score = 9.3;
    //in ra các giá trị của các biến
    printf("chu cai dau tien trong ten cua ban la %c ", firstCharOfName);
    printf("\ntuoi cua tui la %d", age);
    printf("\ndiem bai kiem tra ielts cua tui la %.1f", mark);
    printf("\ndiem trung binh cua tui la %.2lf", score);
    //in ra dịa chỉ của các biến
    printf("\ndia chi cua bien age la %u", &age);
    printf("\ndia chi cua bien mark la %u", &mark);
    printf("\ndia chi cua bien score la %u", score);
    //cho 2 biến số nguyên bất kì, tính thương hai số
    //Input (I)
    int numb1 = 30;
    int numb2 = 11;
    float result;
    //Process (P)
    result = (float)numb1/(float)numb2;
    //Output (O)
    printf("\n%d/%d=%.3f", numb1, numb2, result);
    //Bài toán hoán vị: cho hai biến nguyên chứa giá trị bất kì, hoán vị giá trị của chúng cho nhau
    //cách 1
    //I
    int number1 = 30;
    int cocacola = 11;
    int glass;
    //P
    glass = number1;
    number1 = cocacola;
    cocacola = glass;
    //O
    printf("\nnumber1 = %d, cocacola = %d", number1, cocacola);
    //cách 2
    //I
    int number2 = 25;
    int pepsi = 20;
    //P
    number2 = number2 + pepsi;
    pepsi = number2 - pepsi;
    number2 = number2 - pepsi;
    //O
    printf("\nnumber2 = %d, pepsi = %d", number2, pepsi);
    //kết thúc
    return 0;
}
