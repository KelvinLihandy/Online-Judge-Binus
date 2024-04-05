#include <stdio.h>

int main(){
	int N[4];
	int P[4];
	double undisc[4];
	double remperc[4];
	for(int i = 0; i<4; i++){
		scanf("%d %d", &N[i], &P[i]);
	}
	for(int j = 0; j<4; j++){
		remperc[j] = 1 - (0.01 * N[j]);
		undisc[j] = P[j] / remperc[j];
		printf("$%.2lf\n", undisc[j]);
	}
	return 0;
}
