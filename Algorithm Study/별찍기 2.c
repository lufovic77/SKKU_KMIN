#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int i,j;
	int count=0;
	for(i=0;i<N;i++){
		for(j=0;j<N-count-1;j++){
			printf(" ");
		}
		for(j=N-count-1;j<N;j++){
			printf("*");
		}
		if(i!=N-1)
		printf("\n");
			count++;
	} 


}
