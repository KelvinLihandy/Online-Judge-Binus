#include <stdio.h>

int main(void){
    int items;
    scanf("%d", &items);
    int price[100] = {};
    for(int item = 0; item < items; item++){
        scanf("%d", &price[item]);
    }
    int changes;
    scanf("%d", &changes);
    for(int change = 1; change <= changes; change++){
        int index;
        int substitute;
        scanf("%d %d", &index, &substitute);
        price[index-1] = substitute;
        printf("Case #%d:", change);
        for(int item = 0; item < items; item++){
            printf(" %d", price[item]);
        }
        printf("\n");
    }
    return 0;
}