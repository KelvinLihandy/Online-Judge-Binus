//UNFINISHED


#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for(int test = 1; test <= T; test++){
        long long int N;
        scanf("%lld", &N);

        long long int array[N];
        for(long long int i = 0; i < N; i++){
            scanf("%lld", &array[i]);
        }

        int OddEven;
        if(N % 2 == 0) OddEven = 0; //even
        else OddEven = 1; //odd

        long long int right[50001] = {};
        long long int left[50001] = {};

        if(OddEven == 0){
            long long int rightcount = 0;
            for(long long int i = 0; i < N; i++){
                if(i < (N/2)){
                    left[i] = array[i];
                }
                if(i >= (N/2)){
                    right[rightcount] = array[i];
                    rightcount++;
                }
            }
        }
        if(OddEven == 1){
            long long int rightcount = 0;
            for(long long int i = 0; i < N; i++){
                if(i <= (N/2)+1){
                    left[i] = array[i];
                }
                if(i >= (N/2)){
                    right[rightcount] = array[i];
                    rightcount++;
                }
            }
        }

        printf("Case #%d: ", test);
        if(OddEven == 0){
            long long int leftsum = 0;
            long long int rightsum = 0;
            for(int i = 0; i < (N/2);i++){
                leftsum += left[i];
                rightsum += right[i]; 
            }
            if(leftsum == rightsum) printf("Yes\n");
            else printf("No\n");
        }

        if(OddEven == 1){
            long long int leftsum = 0;
            long long int rightsum = 0;
            for(int i = 0; i < (N/2)+1;i++){
                leftsum += left[i];
                rightsum += right[i]; 
            }
            if(leftsum > 0 && rightsum > 0){ //positive
                if(leftsum-left[(N/2)+1] == rightsum || leftsum == rightsum-right[0]) printf("Yes\n");
            }
            if(leftsum < 0 && rightsum < 0){ //negative
                if(leftsum+left[(N/2)+1] == rightsum || leftsum == rightsum+right[0]) printf("Yes\n");
            }
            else printf("No\n");
        }
        for(int i  = 0; i < (N/2)+1; i++){
            printf("%lld", left[i]);
        }
        printf("\n");
        for(int i  = 0; i < (N/2)+1; i++){
            printf("%lld", right[i]);
        }
    }
    return 0;
}