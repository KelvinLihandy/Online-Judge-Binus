#include <stdio.h>

int main(){
    int x;
    int y;
    int k;
    int i;
    scanf("%d %d %d", &x, &y, &k);
    if(k-x != y-k || x > k || y < k){
        printf("-1\n");
    }
    else if(k-x == y-k || x < k || y > k){
        for(i = 0; i < 100; i++){
            if(x != k && y != k){
                x++;
                y++;
                }
            else{
                break;
            }   
            }
        printf("%d\n", i);
    }
    return 0;
}