#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int array[], int left, int right){
	int pivot = array[right];
	int i = left - 1;
	for(int j = left; j < right; j++){
		if(array[j] < pivot){
			i++;
			Swap(&array[i], &array[j]);
		}
	}
	Swap(&array[i+1], &array[right]);
	return i+1;
}

void QuickSort(int array[], int left, int right){
	if(left < right){
		int correct = Partition(array, left, right);
		QuickSort(array, left, correct-1);
		QuickSort(array, correct+1, right);
	}
}

int main(void){
    int numbers;
    scanf("%d", &numbers);
    int array[100000] = {};
    for(int number = 0; number < numbers; number++){
        scanf("%d", &array[number]);
    }
    QuickSort(array, 0, numbers-1);
    int max = INT_MIN;
    int minus[numbers-1];
    int counter = 0;
    for(int i = 0; i < numbers-1; i++){
        minus[i] = abs(array[i] - array[i+1]);
        if(minus[i] > max) max = minus[i];
    }
    for(int i = 0; i < numbers-1; i++){
        if(minus[i] == max) counter++;
    }
    int count = 1;
    for(int i = 0; i < numbers-1; i++){
        if(abs(array[i] - array[i+1]) == max){
            printf("%d %d", array[i], array[i+1]);
            if(count < counter) printf(" ");
            count++;
        }
    }
    puts("");
    return 0;
}