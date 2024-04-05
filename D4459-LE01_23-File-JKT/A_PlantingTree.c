#include <stdio.h>
#include <string.h>

struct data{
    char name[41];
    char plant[41];
};

int main(){
    FILE *input = fopen("testdata.in", "r");
    int list;
    fscanf(input, "%d\n", &list);
    struct data participant[list];
    for(int i = 0; i < list; i++){
        fscanf(input, "%[^#]#%[^\n]\n", participant[i].name, participant[i].plant);
    }
    int T;
    char name[101][41] = {};
    fscanf(input, "%d\n", &T);
    for(int testCase = 0; testCase < T; testCase++){
        int check = 0;
        fscanf(input, "%s ", name[testCase]);
        for(int j = 0; j < list; j++){
            if(strcmp(participant[j].name, name[testCase]) == 0){
                printf("Case #%d: %s\n", testCase+1, participant[j].plant);
                check = 1;
                break;
            }
        }
        if(!check) printf("Case #%d: N/A\n", testCase+1);
    }
}