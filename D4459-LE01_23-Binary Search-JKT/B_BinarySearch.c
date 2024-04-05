#include <stdio.h>

int Smallest(long long left, long long right, double target){
    long long start = -1;
    long long mid;
    while(left <= right){
        mid = (right-left) / 2 + left;
        double calculate = (1.0/6.0) * (double)mid * (double)(mid+1) * (double)(2*(mid) + 1);
        double calculateBack = (1.0/6.0) * (double)(mid-1) * (double)(mid) * (double)(2*(mid-1) + 1); 
        if(calculate >= target && calculateBack >= target){
            start = mid;
            right = mid-1;
        }
        if(calculate >= target && calculateBack < target){
            start = mid;
            return start;
        }
        else if(calculate < target) left = mid+1;
    }
}

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        double number;
        scanf("%lf", &number);
        long long minimum = Smallest(0, 1449999, number);
        printf("Case #%d: %lld\n", testCase, minimum);
    }
    return 0;
}