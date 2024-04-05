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

int BinarySearch(int array[], int left, int right, int target){
    if(right >= left){
        int mid = (right-left)/2 + left;
        if(target == array[mid]) return mid;
        else if(target > array[mid]) return BinarySearch(array, mid+1, right, target);
        else if(target < array[mid]) return BinarySearch(array, left, mid-1, target);
    }
    return -2;
}

int main(void){
    int students;
    scanf("%d", &students);
    int height[100000] = {};
    for(int student = 0; student < students; student++){
        scanf("%d", &height[student]);
    }
    QuickSort(height, 0, students-1);
    int calls;
    scanf("%d", &calls);
    for(int call = 1; call <= calls; call++){
        int heightCalled;
        scanf("%d", &heightCalled);
        int position = BinarySearch(height, 0, students-1, heightCalled);
        printf("%d\n", position+1);
    }
    return 0;
}