#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int size;
        scanf("%d", &size);
        int numbers[1000] = {};
        for(int number = 0; number < size; number++){
            scanf("%d", &numbers[number]);
        }
        int bibiLocation;
        int liliLocation;
        scanf("%d %d", &bibiLocation, &liliLocation);
        printf("Case #%d : ", testCase);
        if(numbers[bibiLocation-1] > numbers[liliLocation-1]) printf("Bibi\n");
        else if(numbers[bibiLocation-1] < numbers[liliLocation-1]) printf("Lili\n");
        else if(numbers[bibiLocation-1] == numbers[liliLocation-1]) printf("Draw\n");
    }
    return 0;
}