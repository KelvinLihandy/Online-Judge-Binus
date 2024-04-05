#include <stdio.h>

int main(){
    int T;
    int A[3];
    double R[3];
    double F[3];
    double K[3];
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
        scanf("%d", &A[i]);
        R[i] = (double)A[i]*0.8;
        F[i] = (double)A[i]*1.8 + 32;
        K[i] = (double)A[i] + 273;
    }
    for(int i = 0; i<T; i++){
        printf("%.2lf %.2lf %.2f\n", R[i], F[i], K[i]);
    }
    return 0;
}