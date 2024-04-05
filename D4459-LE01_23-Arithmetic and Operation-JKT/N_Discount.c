#include <stdio.h>

int main(){
    long long int A;
    long long int B;
    scanf("%lld %lld", &A, &B);
    double disc = (double)100*(A-B)/A;
    printf("%.2lf%%\n", disc);
    return 0;
}