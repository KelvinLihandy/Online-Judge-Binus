#include <stdio.h>
#include <string.h>

int main(){
    FILE *input;
    input = fopen("testdata.in", "r");
    int T;
    fscanf(input, "%d\n", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        char name[101];
        int count[26] = {};
        fscanf(input, "%s\n", name);
        for(int i = 0; i < strlen(name); i++){
            count[name[i]-'A']++;
        }
        int chg; 
        fscanf(input, "%d\n", &chg);
        int changedKey[26] = {};
        for(int i = 0; i < chg; i++){
            char before;
            char after;
            fscanf(input, "%c %c\n", &before, &after);
            changedKey[before - 'A']++;
            if(count[before - 'A'] == 0 || changedKey[before - 'A'] > 1) continue;
            int transform = count[before - 'A'];
            count[before - 'A'] = 0;
            count[after - 'A'] = count[after - 'A'] + transform;
        }
        for(int i = 0; i < 26; i++){
            if(count[i] > 0) printf("%c %d\n", 'A'+i, count[i]);
        }
    }
    fclose(input);
    return 0;
}