#include <stdio.h>

int main(){
    char x1;
    char x2;
    char x3;
    int X[3];
    int temp;
    scanf("%c %c %c", &x1, &x2, &x3);
    x1 = x1 - ' ';
    x2 = x2 - ' ';
    x3 = x3 - ' ';
    X[0] = (int)x1;
    X[1] = (int)x2;
    X[2] = (int)x3;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3 - i; j++){
            if(X[j+1] < X[j]){
                temp = X[j+1];
                X[j+1] = X[j];
                X[j] = temp;
            }
        }
    }
    if(x1 < x2 && x2 < x3)
        printf("1 2 3\n");
    else if(x1 < x3 && x3 < x2)
        printf("1 3 2\n");
    else if(x2 < x1 && x1 < x3)
        printf("2 1 3\n");
    else if(x2 < x3 && x3 < x1)
        printf("2 3 1\n");
    else if(x3 < x1 && x1 < x2)
        printf("3 1 2\n");
    else if(x3 < x2 && x2 < x1)
        printf("3 2 1\n");
    return 0;
}