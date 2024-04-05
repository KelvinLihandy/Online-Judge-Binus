#include <stdio.h>

int main(){
	char cc[5][11];
	int H1[5];
	int H2[5];
	int M1[5];
	int M2[5];	
	for(int i = 0; i<5; i++){
		scanf("%s %d:%d-%d:%d", cc[i], &H1[i], &M1[i], &H2[i], &M2[i]);
		fflush(stdin);
	}
	for(int j = 0; j<5; j++){
		printf("%s %02.2d:%02.2d-%02.2d:%02.2d\n", cc[j], H1[j]-1, M1[j], H2[j]-1, M2[j]);
	}
	return 0;
}

