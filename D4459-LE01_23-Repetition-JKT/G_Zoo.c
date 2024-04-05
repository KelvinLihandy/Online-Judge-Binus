#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    long long int animals = 0;
    for(int i = 0; i < N; i++){
        int currentAnimal;
        scanf("%d", &currentAnimal);
        animals += currentAnimal;
    }
    printf("%lld\n", animals);
    return 0;
}