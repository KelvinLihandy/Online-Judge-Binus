#include <stdio.h>

int main(){
    int T;
    int A[3];
    long long int B[3];
    double rot[3];
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
        scanf("%d %lld", &A[i], &B[i]);
        rot[i] = (A[i]*B[i])/(double)360;
    }
    for(int i = 0; i<T; i++){
        printf("%.2lf\n", rot[i]);
    }
    return 0;
}