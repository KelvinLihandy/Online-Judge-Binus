#include <stdio.h>

int main(){
    int X;
    int Y;
    scanf("%d %d", &X, &Y);
    double Z = (double)100*X/Y;
    printf("%.2lf%%\n", Z);
    return 0;
}