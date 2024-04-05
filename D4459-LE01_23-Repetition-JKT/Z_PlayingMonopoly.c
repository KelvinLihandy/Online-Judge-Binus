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
        while(position >= 40){
            position = position - 40;
        }
        if(position == 12)      position = 28;
        else if(position == 30) position = 10;
        else if(position == 35) position = 7; 
    }
    printf("%lld\n", position);
    return 0;
}