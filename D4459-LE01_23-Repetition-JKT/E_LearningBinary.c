#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int num;
        int index;
        scanf("%d %d", &num, &index);
        int binary[32] = {};
        int i = 0;
        while(num > 0){
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }
        printf("%d\n", binary[index]);
    }
}
// PRINTING THE REVERSED BINARY ARRAY FOR CORRECT PLACEMENT
// for (int j = i - 1; j >= 0; j--){
//     printf("%d", binary[j]);
// } 