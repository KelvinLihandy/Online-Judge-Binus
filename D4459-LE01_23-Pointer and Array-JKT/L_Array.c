#include <stdio.h>

int main(void){
    int elements;
    scanf("%d", &elements);
    int index[1000];
    int number[1000];
    for(int element = 0; element < elements; element++){
        scanf("%d", &index[element]);
    }
    for(int element = 0; element < elements; element++){
        scanf("%d", &number[element]);
    }
    for(int i = 0; i < elements; i++){
        for(int j= 0; j < elements; j++){
            if(index[j] == i) printf("%d", number[j]);
        }
        if(i < (elements-1)) printf(" ");
    }
    printf("\n");
    return 0;
}