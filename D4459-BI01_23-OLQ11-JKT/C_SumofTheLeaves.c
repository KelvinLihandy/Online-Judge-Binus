#include <stdio.h>
#include <string.h>

void leafSum(long long int node[], long long int index, long long int sum, long long int leaf) {
    sum += node[index];
    if(2*index+1 >= leaf) printf("%lld\n", sum);
	else 				  leafSum(node, 2*index+1, sum, leaf);
    if(2*index+2 < leaf)  leafSum(node, 2*index+2, sum, leaf);
}

int main(){
	long long int T;
	scanf("%lld", &T);
	for(long long int testCase = 1; testCase <= T; testCase++){
		long long int leaf;
		scanf("%lld", &leaf);
		long long int node[100];
		memset(node, 0, sizeof(node));
		for(long long int i = 0; i < leaf; i++){
			scanf("%lld", &node[i]);
		}
		printf("Case #%lld:\n", testCase);
		if(leaf == 1){
			printf("%lld\n", node[0]);
		}
		else if(leaf == 2){
			printf("%lld\n", node[0] + node[1]);
		}
		else if(leaf > 2){
			leafSum(node, 0, 0, leaf);
		}
	}
	return 0;
}