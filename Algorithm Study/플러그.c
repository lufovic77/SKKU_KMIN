#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int i;
	long long sum=0;
	int number;
	for(i=0;i<N;i++){
		scanf("%d",&number);
		sum+=number;
	}
	printf("%d", sum-N+1);
}
