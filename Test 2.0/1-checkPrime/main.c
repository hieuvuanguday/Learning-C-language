#include <stdio.h>
#include <stdlib.h>
int checkPrime(int n);
int main()
{
    int n;
    printf("\nNhap so: ");
    scanf("%d", &n);
    int result = checkPrime(n);
    printf("\nKet qua: %d ", result);
    return 0;
}
int checkPrime(int n){
    if(n >= 2){
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i ==0) return 0;
        }
        return 1;
    }else return 0;

}
