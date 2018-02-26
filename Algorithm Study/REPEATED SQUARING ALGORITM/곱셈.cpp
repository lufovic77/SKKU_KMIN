#include <stdio.h>
int divisor;
unsigned long long exponential(int x,int n){
	if(n==0)
	return 1;
	if(n%2==1)
	return x*exponential(x,n-1)%divisor;
	else{
		unsigned long long half=exponential(x,n/2);
		return half*half%divisor;
	}
}
int main(){
	int A,B;
	scanf("%d%d%d", &A,&B,&divisor);
	unsigned long long answer=exponential(A,B);
	printf("%llu", answer);
}
