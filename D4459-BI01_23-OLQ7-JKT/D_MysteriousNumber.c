#include <stdio.h>
#include <math.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int test = 1; test <= T; test++){
        long long int X;
        scanf("%lld", &X);
        int square_check = 0;
        int cubic_check = 0;
        int prime_check = 0;
        int check = 0;
        long long int square_root = sqrt(X);
        if(square_root * square_root == X) square_check = 1;
        long long int cubic_root = cbrt(X);
        if(cubic_root * cubic_root * cubic_root == X) cubic_check = 1;
        if(X == 0 || X == 1) prime_check = 0;
        else if(X == 2 || X == 3) prime_check = 1;
        for(int i = 2; i <= X/2; i++){
            if(X % i == 0){
                prime_check = 0;
                break;
            }
            else prime_check = 1;
        }
        printf("Case #%d :", test);
        if(square_check){
            printf(" square");
            check = 1;
        }
        if(cubic_check){
            printf(" cubic");
            check = 1;
        }
        if(prime_check){
            printf(" prime");
            check = 1;
        }
        if(!check) printf(" none");
        printf("\n");
    }
    return 0;
}

