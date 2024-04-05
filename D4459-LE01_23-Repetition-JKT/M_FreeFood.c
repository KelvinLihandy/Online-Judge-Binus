#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int food;
        int money;
        int totalPrice = 0;
        scanf("%d %d", &food, &money);
        for(int i = 0; i < food; i++){
            int price;
            scanf("%d", &price);
            totalPrice += price;
        }
        if(totalPrice > money) printf("Case #%d: Wash dishes\n", testCase);
        else if(totalPrice <= money) printf("Case #%d: No worries\n", testCase);
    }
    return 0;
}