#include <stdio.h>

int main(){
    long int N;
    long long int position = 0;
    do{
    scanf("%ld", &N);
    }while(N < 1 && N > 2000);
    int k;
    for(int i = 0; i < N; i++){
        do{
        scanf("%d", &k);
        }while(k < 2 && k > 12);
        position += k;
        if(position == 9)       position = 21;
        else if(position == 33) position = 42; 
        else if(position == 53) position = 37;
        else if(position == 76) position = 92; 
        else if(position == 80) position = 59; 
        else if(position == 97) position = 88;
    }
    printf("%lld\n", position);
    return 0;
}