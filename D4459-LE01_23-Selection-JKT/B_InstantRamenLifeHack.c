#include <stdio.h>

int main(){
    int T; 
    int T2;
    int K[1000]; 
    int N[1000]; 
    int M[1000]; 
    int i;
    scanf("%d", &T);
    for(i = 0; i<T; i++){
        scanf("%d %d %d", &K[i], &N[i], &M[i]);
    }
    for(i = 0; i<T; i++){
        if(K[i] > N[i] + M[i]){
            printf("Case #%d: no\n", i+1);
        }
        else{ 
            printf("Case #%d: yes\n", i+1);
        }
    }  
}
