#include <stdio.h>

int main(void){
    long T;
    scanf("%ld", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        long pageEnd;
        long target;
        scanf("%ld %ld", &pageEnd, &target);
        long pageStart = 1;
        long flips = 0;
        if(target < pageStart || target > pageEnd) flips = -1;
        else{
            if(pageEnd % 2 == 0){
                int mid1 = pageEnd/2;
                int mid2 = mid1+1;
                if(pageStart == target || pageEnd == target) flips = 0;
                else{
                    if(target <= mid1){
                        flips = target / 2;
                    }
                    else if(target >= mid2){
                        flips = ((pageEnd-target)+1) / 2;
                    }
                }
            }
            else if(pageEnd % 2 != 0){
                int mid1 = pageEnd/2;
                int mid2 = mid1+1;
                if(pageStart == target || pageEnd == target || pageEnd-1 == target) flips = 0;
                else{
                    if(target <= mid1){
                        flips = target / 2;
                    }
                    else if(target >= mid2){
                        flips = ((pageEnd-target)) / 2;
                    }
                }
            }
        }
        printf("Case #%ld: %ld\n", testCase, flips);
    }
    return 0;
}