#include <stdio.h>

void binarySearch(long long int arr[], long long int left, long long int right, long long int target){
    long long int start = -1;
    while(left <= right){
        long long int mid = (right-left) /2 + left;
        if(target < arr[mid]) right = mid-1;
        else if(target > arr[mid]) left = mid+1;
        else if(arr[mid] == target){
            start = mid;
            right = mid-1;
        }
    }
    if(start == -1) printf("-1\n");
    else printf("%lld\n", start+1);
    //https://stackoverflow.com/questions/13197552/using-binary-search-with-sorted-array-with-duplicates
}

int main(){
    long long int list;
    long long int searches;
    scanf("%lld %lld", &list, &searches);
    long long int numList[100000];
    for(int i = 0; i < list; i++){
        scanf("%lld", &numList[i]);
    }
    long long int searchList[100000];
    for(int i = 0; i < searches; i++){
        scanf("%lld", &searchList[i]);
        if(searchList[i] > numList[list-1]) printf("-1\n");
        else binarySearch(numList, 0, list-1, searchList[i]);
    }
}