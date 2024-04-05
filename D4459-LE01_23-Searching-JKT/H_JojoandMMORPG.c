#include <stdio.h>

void swap(long long *a, long long *b){
    long long temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(long long arr[], int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int mission;
    scanf("%d", &mission);
    long long levelPower[mission];
    for(int i = 0; i < mission; i++){
        scanf("%lld", &levelPower[i]);
    }
    bubbleSort(levelPower, mission);
    long long jojoPower;
    scanf("%lld", &jojoPower);
    int count = 0;
    for(int i = 0; i < mission; i++){
        if(jojoPower >= levelPower[i]){
            count++;
            jojoPower = jojoPower - levelPower[i];
        }
    }
    printf("%d\n", count);
}