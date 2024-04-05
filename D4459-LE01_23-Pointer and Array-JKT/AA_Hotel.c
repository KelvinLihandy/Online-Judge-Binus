#include <stdio.h>
#include <stdlib.h>

int main(void){
    int rooms;
    scanf("%d", &rooms);
    int* key = (int*)calloc(2000000000, sizeof(int));
    int happy = 0;
    for(int room = 0; room < rooms; room++){
        int roomNumber;
        scanf("%d", &roomNumber);
        if(key[roomNumber-1] != 1){
            key[roomNumber-1] = 1;
            happy++;
        }
    }
    printf("%d\n", happy);
    free(key);
    return 0;
}