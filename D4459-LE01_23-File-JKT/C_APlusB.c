#include <stdio.h>

int main(){
    FILE *input = fopen("testdata.in", "r");
    int number1;
    int number2;
    fscanf(input, "%d %d\n", &number1, &number2);
    printf("%d\n", number1+number2);
}