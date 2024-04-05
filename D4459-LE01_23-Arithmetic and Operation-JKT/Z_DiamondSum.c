#include <stdio.h>

int main(){
    int T;
    int a[3];
    int b[3];
    int c[3];
    int d[3];
    double res[3];
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
        scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
    }
    for(int i = 0; i<T; i++){
        res[i] = (2.00*a[i]/1.00) + (4.00*b[i]/2.00) + (4.00*c[i]/3.00) + (2.00*d[i]/4.00);
        printf("%.2lf\n", res[i]);
    }
    return 0;
}