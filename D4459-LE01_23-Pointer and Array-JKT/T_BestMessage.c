#include <stdio.h>
#include <string.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        char message[1001] = {};
        getchar();
        int distance[1000] = {};
        scanf("%s", message);
        for(int i = 0; i < strlen(message); i++){
            if(message[i] >= 'A' && message[i] <= 'D'){
                distance[i] = message[i] - 'A';
                message[i] = 'A';
            }
            else if(message[i] >= 'E' && message[i] <= 'H'){
                distance[i] = message[i] - 'E';
                message[i] = 'E';
            }
            else if(message[i] >= 'I' && message[i] <= 'N'){
                distance[i] = message[i] - 'I';
                message[i] = 'I';
            }
            else if(message[i] >= 'O' && message[i] <= 'T'){
                distance[i] = message[i] - 'O';
                message[i] = 'O';
            }
            else if(message[i] >= 'U' && message[i] <= 'Z'){
                distance[i] = message[i] - 'U';
                message[i] = 'U';
            }
        }
        printf("Case #%d:\n", testCase);
        printf("%s\n", message);
        for(int i = 0; i < strlen(message); i++){
            printf("%d", distance[i]);
        }
        printf("\n");
    }
    return 0;
}