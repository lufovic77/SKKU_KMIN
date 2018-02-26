#include <stdio.h>
int fibonacci[1000001];
int main(){
	fibonacci[1]=1;
	fibonacci[2]=2;
	int N;
	int i; 
	scanf("%d", &N);
	for(i=3;i<=N;i++){
		fibonacci[i]=(fibonacci[i-1]+fibonacci[i-2])%15746;
	}
	printf("%d", fibonacci[N]);
	
}
