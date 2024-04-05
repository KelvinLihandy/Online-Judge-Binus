#include <stdio.h>

int main(){
    int K;
    scanf("%d", &K);

    for(int testCase = 1; testCase <= K; testCase++){
        int N;
        scanf("%d", &N);
        int MMR[N];
        for(int i = 0; i < N; i++){
            scanf("%d", &MMR[i]);
        }
        int F;
        scanf("%d", &F);
        int MMRNotFound = 1;
        for(int i = 0; i < N; i++){
            if(F == MMR[i]){
                MMRNotFound = 0;
                break;
            }
        }
        if(MMRNotFound){
            printf("CASE #%d: -1 -1\n", testCase);
            continue;
        }
        int highestMMR = 0;
        for(int i = 0; i < N; i++){
            if(MMR[i] > highestMMR) highestMMR = MMR[i];
        }
        if(F == highestMMR){
            int differenceList[N]; 
            int minimumDifference = 7000;
            int lowerMMR;
            for(int i = 0; i < N; i++){
                differenceList[i] = F - MMR[i];
                if(differenceList[i] < 0){
                    differenceList[i] = differenceList[i] * (-1);
                }
                if(differenceList[i] != 0 && differenceList[i] < minimumDifference){
                    minimumDifference = differenceList[i];
                }
            }
            lowerMMR = F - minimumDifference;
            printf("CASE #%d: %d %d\n", testCase, lowerMMR, F);
        }
        else if(F != highestMMR){
            int differenceList[N];
            int minimumDifference = 7000;
            int higherMMR;
            for(int i = 0; i < N; i++){
                differenceList[i] = MMR[i] - F;
                if(differenceList[i] > 0 && differenceList[i] < minimumDifference){
                    minimumDifference = differenceList[i];
                }
            }
            higherMMR = F + minimumDifference;
            printf("CASE #%d: %d %d\n", testCase, F, higherMMR);
        }
    }
    return 0;
}