#include <stdio.h>

int main(){
    double Ph;
    double M;
    double Pu;
    scanf("%lf %lf %lf", &Ph, &M, &Pu);
    printf("%.2lf\n", 0.2*Ph + 0.3*M + 0.5*Pu);
    return 0;
}