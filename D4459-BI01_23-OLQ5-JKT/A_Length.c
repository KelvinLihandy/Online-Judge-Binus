#include <stdio.h>

int main(){
    int T;
    do{
        scanf("%d", &T);
    }while(T < 1 || T > 100);
    long long int N[T];
    int l[T];
    for(int test = 0; test < T; test++){
        do{
            scanf("%lld", &N[test]);
        }while(N[test] < 1 && N[test] > 1000000000000);
        if(N[test] >= 100000000000) l[test] = 12;  
        else if(N[test] >= 10000000000) l[test] = 11;
        else if(N[test] >= 1000000000) l[test] = 10;
        else if(N[test] >= 100000000) l[test] = 9;
        else if(N[test] >= 10000000) l[test] = 8;
        else if(N[test] >= 1000000) l[test] = 7;
        else if(N[test] >= 100000) l[test] = 6;
        else if(N[test] >= 10000) l[test] = 5;
        else if(N[test] >= 1000) l[test] = 4;
        else if(N[test] >= 100) l[test] = 3;
        else if(N[test] >= 10) l[test] = 2;
        else if(N[test] >= 1) l[test] = 1;
    }
    for(int i = 0; i < T; i++){
        printf("Case #%d: %d\n", i+1, l[i]);
    }
    return 0;
}