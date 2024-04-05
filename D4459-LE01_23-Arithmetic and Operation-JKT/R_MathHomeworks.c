#include <stdio.h>

int main(){
    long long int A[3];
    long long int B[3];
    long long int C[3];
    long long int D[3];
    long long int res[3];
    int i;
    do{
        scanf("(%d+%d)X(%d-%d)", &A[i], &B[i], &C[i], &D[i]);
        i++;
    }while(i != 3);
    return 0;
}