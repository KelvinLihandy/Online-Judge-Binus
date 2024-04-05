#include <stdio.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int array[], int left, int right){
	int pivot = array[right];
	int i = left - 1;
	for(int j = left; j < right; j++){
		if(array[j] > pivot){
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
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int elements;
        int numbers[100000] = {};
        scanf("%d", &elements);
        for(int element = 0; element < elements; element++){
            scanf("%d", &numbers[element]);
        }
        QuickSort(numbers, 0, elements-1);
        printf("Case #%d: %d\n", testCase, numbers[0]+numbers[1]);
    }
    return 0;
}