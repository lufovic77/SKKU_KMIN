#include <stdio.h>
unsigned long long pascal[4010][4010];

unsigned long long C(int n,int r){
	if(r==0 || n==r) return 1;
	else if(pascal[n][r]>0) return pascal[n][r]%10000007;
	else {
		return pascal[n][r]=(C(n-1,r-1)+C(n-1,r))%10000007;
	}
}

int main(){
	int N,K;
	scanf("%d%d", &N,&K);
	if(K>N/2)	K=N-K;
	printf("%llu", C(N,K));
}
