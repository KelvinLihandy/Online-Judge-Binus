#include <stdio.h>

int main(){
    int A;
    int B;
    scanf("%d %d", &A, &B);
    double C = (double)100*B/A;
    printf("%.4lf%%\n", C);
    return 0;
}