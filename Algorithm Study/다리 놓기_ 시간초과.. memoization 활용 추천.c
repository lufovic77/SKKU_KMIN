#include <stdio.h>
unsigned long long array[100000];
unsigned long long pascal[40][40];

unsigned long long C(int n,int r){
	if(r==0 || n==r) return 1;
	else if(pascal[n][r]>0) return pascal[n][r];
	else {
		return pascal[n][r]=(C(n-1,r-1)+C(n-1,r));
	}
}

int main(){
	int T;
	scanf("%d", &T);
	int N,M;
	int a,b;
	int i;
	unsigned long long tempM,tempN;
	for(i=0;i<T;i++){
		scanf("%d%d", &N,&M);
		if(N>M/2)
		N=M-N;
		array[i]=C(M,N);
	}
	for(i=0;i<T;i++){
		printf("%llu", array[i]);
		if(i!=T-1)
		printf("\n");
	}
	
}
