#include <stdio.h>
#include <memory.h>
unsigned long long pascal[4000010][4000010];
unsigned long long C(unsigned long long n,unsigned long long k){
	if(n==k||k==0)
	return 1;
	if(pascal[n][k]>=0)
	return pascal[n][k];
	return pascal[n][k]=((unsigned long long)C(n-1,k-1)+(unsigned long long)C(n-1,k))%1000000007; 
	
}
int main(){
	unsigned long long N,K;
	scanf("%llu%llu", &N,&K);
	pascal[1][0]=1;
	pascal[1][1]=1;
	printf("%llu", C(N,K)%1000000007);
}
