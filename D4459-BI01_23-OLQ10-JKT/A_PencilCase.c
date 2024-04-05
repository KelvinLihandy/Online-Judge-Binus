#include <stdio.h>

const double PI = 3.14;

int main(){
    int T;
    do{
        scanf("%d", &T);
    }while(T < 1 || T > 1000);
    for(int test = 1; test <= T; test++){
        int R;
        int H;
        scanf("%d %d", &R, &H);
        double result = (2 * PI * R * R) + (2 * PI * R * H);
        printf("Case #%d: %.2lf\n", test, result);

    }
    return 0;
}