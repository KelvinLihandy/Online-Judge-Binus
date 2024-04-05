#include <stdio.h>

int NotFibo(int num0, int num1, int sequence){
    if(sequence == 0) return num0;
    if(sequence == 1) return num1;
    return NotFibo(num0, num1, sequence-1) + NotFibo(num0, num1, sequence-2);
}

int main(){
    int num0;
    int num1;
    scanf("%d %d", &num0, &num1);
    int sequence;
    scanf("%d", &sequence);
    printf("%d\n", NotFibo(num0, num1, sequence));
}