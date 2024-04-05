#include <stdio.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int carriages;
        int time;
        scanf("%d %d", &carriages, &time);
        int numbers[500] = {};
        for(int carriage = 0; carriage < carriages; carriage++){
            scanf("%d", &numbers[carriage]);
        }
        int totalTime = 0;
        for(int i = 0; i < carriages-1; i++){
            for(int j = 0; j < carriages-i-1; j++){
                if(numbers[j] > numbers[j+1]){
                    totalTime += time;
                    Swap(&numbers[j], &numbers[j+1]);
                }
            }
        }
        printf("Case #%d: %d\n", testCase, totalTime);
    }
    return 0;
}