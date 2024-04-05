#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
	
    for(int test = 0; test < T; test++){
        int N;
        do{
            scanf("%d", &N);
        }while(N % 2 == 0);
        
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(i == 1 || i == N || j == 1 || j == N || i == j || j == (N-i) + 1){
                    printf("*");
                }
                else printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
