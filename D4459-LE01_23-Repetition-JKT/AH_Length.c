#include <stdio.h>

int main(){
    int T;
    do{
    scanf("%d", &T);
    }while(T < 1 || T > 100);

    long long int N[T];
    int i = 0;
	
    for(int test = 0; test < T; test++){
        do{
            scanf("%lld", &N[test]);
        }while(N[test] < 1 || N[test] > 1000000000000);
		
		do{
			N[test] = N[test] / 10;
			i++;
		}while(N[test] > 0);
		
		printf("Case #%d: %d\n", test+1, i);
		i = 0;
    }
    return 0;
}
