#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    int count[10] = {};
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }
    int banyak = count[0];
    int modus = 0;
    for(int i = 0; i < 10; i++){
        if(count[i] > banyak){
            banyak = count[i];
            modus = i;
        }
    }
    printf("Modus = %d | Banyak = %d", modus, banyak);
    return 0;
}