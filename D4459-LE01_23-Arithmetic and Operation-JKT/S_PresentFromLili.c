#include <stdio.h>
#include <math.h>

int main(){
    double L;
    double B;
    double H;
    scanf("%lf %lf %lf", &L, &B, &H);
    double area = B*H + 3*B*L;
    printf("%.3lf\n", area);
    return 0;
}