#include <stdio.h>

int main(void){
    int size;
    int pointChange;
    scanf("%d %d", &size, &pointChange);
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            if(i % pointChange == 0) printf("#");
            else printf(".");
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            if(j % pointChange == 0) printf("#");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}