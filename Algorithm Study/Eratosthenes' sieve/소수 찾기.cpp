#include <stdio.h>
#include <memory.h>
int num[1100];
int isprime[1100];
int main(){
	int N;
	scanf("%d", &N);
	int i; 
	int m,n;
	int count=0;
		int a=1000;
		isprime[1]=1;
		for(m=2;m<=a;m++){
			for(n=m*m;n<=a;n+=m){
				isprime[n]=1;				
			}
		}
	for(i=0;i<N;i++){
		scanf("%d", &m);
		if(isprime[m]==0)count++;
	}
	printf("%d", count);
}
