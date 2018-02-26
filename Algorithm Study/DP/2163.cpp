#include <stdio.h>
int choco[301][301];
int main(){
	int N,M;
	scanf("%d%d", &N,&M);
	int temp;
	if(N<M){
		temp=N;
		N=M;
		M=temp;	
	}
	int i,k;
	for(i=1;i<=N;i++)
		choco[i][1]=i-1;
	for(i=1;i<=N;i++){
		for(k=2;k<=i;k++){
			choco[i][k]=choco[i][k-1]+i;
		}
	}
	printf("%d", choco[N][M]);
}

