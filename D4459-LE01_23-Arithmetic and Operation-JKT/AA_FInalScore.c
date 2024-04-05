#include <stdio.h>

int main(){
    double T;
    double Ut;
    double Ua;
    scanf("%lf %lf %lf", &T, &Ut, &Ua);
    printf("%.2lf\n", 0.2*T + 0.3*Ut + 0.5*Ua);
    return 0;
}