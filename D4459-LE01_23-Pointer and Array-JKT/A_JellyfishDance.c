#include <stdio.h>

int main(void){
    int days;
    scanf("%d", &days);
    int views[100] = {};
    for(int day = 0; day < days; day++){
        scanf("%d", &views[day]);
    }
    int friends;
    scanf("%d", &friends);
    for(int friend = 1; friend <= friends; friend++){
        int initial;
        int final;
        scanf("%d %d", &initial, &final);
        int viewGain = 0;
        for(int i = initial-1; i <= final-1; i++){
            viewGain += views[i];
        }
        printf("Case #%d: %d\n", friend, viewGain);
    }
}