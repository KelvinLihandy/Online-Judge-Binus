#include <stdio.h>

int AsClose(long long summed[], int left, int right, long long limit, int datas){
	int start = -1;
	while(left <= right){
		int mid = (right-left)/2 + left;
		if(summed[mid] <= limit && mid == datas-1){
			start = mid;
			return start+1;
		}
		if(summed[mid] <= limit && summed[mid+1] > limit){
			start = mid;
			return start+1;
		}
		else if(summed[mid] <= limit && summed[mid+1] <= limit){
			start = mid;
			left = mid+1;
		}
		else if(summed[mid] > limit) right = mid-1;
	}
	return -1;
}

int main(void){
	int elements;
	int array[100000] = {};
	long long summed[100000] ={};
	scanf("%d", &elements);
	for(int i = 0; i < elements; i++){
		scanf("%d", &array[i]);
		if(i == 0) summed[i] = array[i];
		else if(i > 0) summed[i] = array[i] + summed[i-1];
	}
	int T;
	scanf("%d", &T);
	for(int testCase = 1; testCase <= T; testCase++){
		long long limit;
		scanf("%lld", &limit);
		printf("Case #%d: %d\n", testCase, AsClose(summed, 0, elements-1, limit, elements));
	}
	return 0;
}