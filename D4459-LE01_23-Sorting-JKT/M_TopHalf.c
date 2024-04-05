#include <stdio.h>

void Swap(long *a, long *b){
    long temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(long number[], int left, int right){
    int pivot = number[right];
    int i = left-1;
    for(int j = left; j < right; j++){
        if(number[j] < pivot){
            i++;
            Swap(&number[i], &number[j]);
        }
    }
    Swap(&number[i+1], &number[right]);
    return i+1;
}

void QuickSort(long number[], int left, int right){
    if(left < right){
        int correct = Partition(number, left, right);
        QuickSort(number, left, correct-1);
        QuickSort(number, correct+1, right);
    }
}

int main(){
    int count;
    scanf("%d", &count);
    long number[count];
    for(int i = 0; i < count; i++){
        scanf("%ld", &number[i]);
    }
    QuickSort(number, 0, count-1);
    for(int i = (count/2)+1; i < count; i++){
        if(i == count-1) printf("%ld\n", number[i]);
        else printf("%ld ", number[i]);
    }
}