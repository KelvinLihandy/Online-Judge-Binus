#include <stdio.h>

int main(){
    int a[3];
    int b[3];
    int c[3];
    int d[3];
    double x[3];
    for(int i = 0; i<3; i++){
        scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
    }
    for(int i = 0; i<3; i++){
        x[i] = 2*a[i] + 2*b[i] + 2*c[i] + d[i];
        printf("%.2lf\n", x[i]);
    }
    return 0;
}