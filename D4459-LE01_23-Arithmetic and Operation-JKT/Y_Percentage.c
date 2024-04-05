#include <stdio.h>

int main(){
    int T;
    int P[3];
    long long int N[3];
    double perc[3];
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d %lld", &P[i], &N[i]);
        perc[i] = (double)(N[i]*P[i])/100;
    }
    for(int j = 0; j < T; j++){
        printf("%.2lf\n", perc[j]);
    }
    return 0;
}