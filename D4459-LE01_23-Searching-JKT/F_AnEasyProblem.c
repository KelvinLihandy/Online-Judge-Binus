#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int opinion[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &opinion[i]);
    }
    int key = 0;
    for(int i = 0; i < N; i++){
        if(opinion[i] == 1){
            printf("not easy\n");
            key = 1;
            break;
        }
    }
    if(!key) printf("easy\n");
    return 0;
}