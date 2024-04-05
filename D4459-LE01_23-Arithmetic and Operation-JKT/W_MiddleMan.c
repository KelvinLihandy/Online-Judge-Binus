#include <stdio.h>

int main(){
    int N[3][4];
    for(int i = 0; i < 3; i++){
        scanf("%s", N[i]);
        getchar();
    }
    for(int j = 0; j < 3; j++){
        printf("%s\n", N[j][1]);
    }
    return 0;
}
