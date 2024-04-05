#include <stdio.h>

int main(){
    long long int a;
    long long int b;
    long long int c;
    long long int d;
    long long int LHS;
    long long int RHS;
    do{
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        LHS = a*b;
        RHS = c+d;
    }while(LHS == RHS);
    if(LHS > RHS){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}