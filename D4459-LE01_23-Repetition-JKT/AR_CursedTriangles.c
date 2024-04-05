#include <stdio.h>

int main(){
    int triangles;
    int height;
    scanf("%d %d", &triangles, &height);
    for(int i = 1; i <= triangles; i++){
        for(int j = 1; j <= height; j++){// |
            //kosong
            for(int k = 1; k <= height-j; k++){// -
                printf(" ");
            }
            for(int k = 1; k <= j; k++){
                printf("*");
            }
            puts("");
        }
    }
    return 0;
}