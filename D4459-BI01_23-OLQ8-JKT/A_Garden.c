#include <stdio.h>

int main(){
    int X;
    int Y;
    scanf("%d %d", &X, &Y);
    int array[X][Y];
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d", &array[i][j]);
        }
    }
    long int T;
    scanf("%ld", &T);
    for(long int i = 0; i < T; i++){
        int a;
        int b;
        int c;
        scanf("%d %d %d", &a, &b, &c);
        array[a-1][b-1] = c;
    }
    for(int i = 0; i < X; i++){
        int j = 0;
        printf("%d", array[i][j]);
        for(int j = 1; j < Y; j++){
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}