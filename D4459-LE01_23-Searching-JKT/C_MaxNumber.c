#include <stdio.h>

int main(){
    int N;
    int M;
    scanf("%d %d", &N, &M);
    int numbers[999] = {};
    for(int i = 0; i < N; i++){
        scanf("%d", &numbers[i]);
    }
    for(int i = 0; i < M; i++){
        int remove;
        scanf("%d", &remove);
        for(int j = 0; j < N; j++){
            if(numbers[j] == remove){
                numbers[j] = -1;
            }
        }
    }
    int max = -1;
    for(int i = 0; i < N; i++){
        if(numbers[i] > max) max = numbers[i];
    }
    printf("Maximum number is %d\n", max);
    return 0;
}