#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int test = 0 ; test < T; test++){
        long long int ABC[3] = {};
        getchar();
        long long int temp = 0;
        scanf("%lld %lld %lld", &ABC[0], &ABC[1], &ABC[2]);    
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2 - j; k++){
                if(ABC[k] > ABC[k+1]){
                    temp = ABC[k+1];
                    ABC[k+1] = ABC[k];
                    ABC[k] = temp;
                }
            }
        } 
        if(ABC[0] + ABC[1] > ABC[2]) printf("BISA\n");
        else                         printf("TIDAK BISA\n");
    }
    return 0;
}