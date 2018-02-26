#include <stdio.h>


int pascal[210][210];
int min (int a,int b){
	if(a>=b)
	return b;
	else
	return a;
}

int main(){
	int N,K;
	scanf("%d%d", &N,&K);
	int i,j;
	for(i=0;i<=N;i++){
		for(j=0;j<=min(i,K);j++){
			if(j==0 || i==j){
				pascal[i][j]=1;
				continue;
			}
			pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
		}
	}
	for(i=0;i<=N;i++){
		for(j=0;j<=min(i,K);j++){
			printf("%d ", pascal[i][j]);
		}
		printf("\n");
	}
	
	printf("%d ", pascal[N][K]);
}
