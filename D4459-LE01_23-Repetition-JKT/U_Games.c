#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int combats;
        scanf("%d", &combats);
        char combat[101] = {};
        getchar();
        scanf("%s", combat);
        int lili = 0;
        int bibi = 0;
        for(int i = 0; i < combats; i++){
            if(combat[i] == 'L') lili++;
            else if(combat[i] == 'B') bibi++;
            else if(combat[i] == 'T'){
                bibi++;
                lili++;
            }
        }
        if(lili == bibi) printf("None\n");
        else if(lili > bibi) printf("Lili\n");
        else if(lili < bibi)  printf("Bibi\n");
    }
    return 0;
}