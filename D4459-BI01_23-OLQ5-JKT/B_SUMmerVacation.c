#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int test = 0; test < T; test++){
		int N;
		scanf("%d", &N);
		int A[N];
		for(int a = 0; a < N; a++){
			scanf("%d", &A[a]);
		}
		int cool = 0;
		for(int i = 0; i < N; i++){
			int check = 0;
			for(int j = 0; j < N; j++){
				for(int k = j + 1; k < N; k++){
					if(i != j && i != k && A[i] == A[j] + A[k]){
						cool++;
						check = 1;
						break;
					}
				}
				if(check) break;
			}
		}
		printf("Case #%d: %d\n", test+1, cool);
	}
	return 0;
}
