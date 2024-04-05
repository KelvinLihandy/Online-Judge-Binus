#include <stdio.h>

int main(){
	int X[4];
	int Y[4];
	int res[4];
	for(int i = 0; i<4; i++){
		scanf("%d %d", &X[i], &Y[i]);
	}
	for(int i = 0; i<4; i++){
		res[i] = X[i] * Y[i];
		printf("%d\n", res[i]);
	}
	return 0;
}
