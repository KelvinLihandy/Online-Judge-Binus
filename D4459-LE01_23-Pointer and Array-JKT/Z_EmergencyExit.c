// UNFINISHED

// #include <stdio.h>

// int main(void){
//     int T;
//     scanf("%d", &T);
//     for(int testCase = 1; testCase <= T; testCase++){
//         int length;
//         int breath;
//         scanf("%d %d", &length, &breath);
//         char hallWay[length+1];
//         int map[length];
//         scanf("%s", hallWay);
//         for(int i = 0; i < length; i++){
//             if(hallWay[i] == '1') map[i] = 1;
//             else if(hallWay[i] == '0') map[i] = 0;
//         }
//         int counter = breath;
//         int dead = 0;
//         int up = 0;
//         for(int i = 0; i < length; i++){
            
//             if(map[i] == 1 && up == 0){
//                 // counter = breath;
//                 up = 1;
//             }
//             if(map[i] == 1 && up == 1){
//                 up = 0;
//                 counter = breath;
//             }
//             if(map[i] == 0 && up == 0) counter--;
//             if((counter <= 0 && length >= 2) || (i == length-1 && up == 1)){
//                 dead = 1;
//                 break;
//             }
            
            
//         }
//         printf("Case #%d: ", testCase);
//         if(dead == 0) printf("Alive\n");
//         else if(dead == 1) printf("Dead\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T;  testCase++){
        int hallwayLength;
        int breathCapacity;
        scanf("%d %d", &hallwayLength, &breathCapacity);
        char map[hallwayLength+1];
        getchar();
        scanf("%s", map);
        int remainingBreath = breathCapacity;
        int up = 0;
        int upped = 0;
        for(int move = 0; move < hallwayLength; move++){
            if(remainingBreath == 0){
                break;
            }
            if(map[move] == '1' && up == 0){
                up = 1;
                upped = 1;
                remainingBreath = breathCapacity;
                continue;
            }
            if(map[move] == '0' && up == 0){
                remainingBreath--;
                continue;
            }
            if(map[move] == '1' && up == 1){
                up = 0;
                remainingBreath = breathCapacity;
                continue;
            }
        }
        printf("Case #%d: ", testCase);
        if(remainingBreath <= 0 || up == 1) printf("Dead\n");
        else printf("Alive\n");
    }
    return 0;
}