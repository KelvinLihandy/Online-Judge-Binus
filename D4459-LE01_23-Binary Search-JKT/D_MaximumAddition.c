#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int elements;
        scanf("%d", &elements);
        long long limit;
        scanf("%lld", &limit);
        long array[10000] = {};
        for(int i = 0; i < elements; i++){
            scanf("%ld", &array[i]);
        }
        int segment = 0;
        int longest = 0;
        long long sum = 0;
        int start = 0;
        for(int i = 0; i < elements; i++){
            sum += array[i];
            while(sum > limit){
                sum -= array[start];
                start++;
            }
            int segment = i - start + 1;
            if(segment > longest) longest = segment;
        }
        if(longest == 0) longest = -1;
        printf("Case #%d: %d\n", testCase, longest);

    }
    return 0;
}