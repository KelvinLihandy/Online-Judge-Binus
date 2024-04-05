#include <stdio.h>

int TreeCount(int trees[], int dayCounter, int days, int total){
    if(dayCounter == days) return total;
    total += trees[dayCounter];
    return TreeCount(trees, dayCounter+1, days, total);
}

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int days;
        scanf("%d", &days);
        int trees[days];
        for(int i = 0; i < days; i++){
            scanf("%d", &trees[i]);
        }
        printf("Case #%d: %d\n", testCase, TreeCount(trees, 0, days, 0));
    }
}