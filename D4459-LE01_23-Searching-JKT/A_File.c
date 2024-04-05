#include <stdio.h>
#include <string.h>

struct dictionary{
    char shortened[51];
    char original[51];
};

int main(void){
    FILE* input = fopen("testdata.in", "r");
    int size;
    fscanf(input, "%d ", &size);
    struct dictionary data[size];
    for(int i = 0; i < size; i++){
        fscanf(input, "%[^#]#%[^\n]\n", data[i].shortened, data[i].original);
    }
    int T;
    fscanf(input, "%d ", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        printf("Case #%d:\n", testCase);
        char full[101] = {};
        char sentence[51][51];
        fscanf(input, "%[^\n]\n", full);
        char *token = strtok(full, " ");
        int first = 0;
        while(token != NULL){
            int found = 0;
            for(int i = 0; i < size; i++){
                if(strcmp(token, data[i].shortened) == 0 || strcmp(token, data[i].original) == 0){
                    if(first == 0){
                        printf("%s", data[i].original);
                        found = 1;
                        first = 1;
                    }
                    else{
                        printf(" %s", data[i].original);
                        found = 1;
                    }
                    break;
                }
            }
            if(found == 0){
                if(first == 0){
                    printf("%s", token);
                    first = 1;
                }
                else printf(" %s", token);
            }

            token = strtok(NULL, " ");
        }
        printf("\n");
    }
    fclose(input);
    return 0;
}