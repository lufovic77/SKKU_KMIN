#include <stdio.h>
long long num[90];
int main(){
	int n;
	scanf("%d", &n);
	num[1]=1;
	num[2]=1;
	num[3]=2;
	int i; 
	if(n==1){
		printf("4");	
		return 0;
	}
	if(n==2){
		printf("6");
		return 0;
	}
	if(n==3){
		printf("10");
		return 0;
	}
	for(i=4;i<=80;i++){
		num[i]=num[i-1]+num[i-2];
	}
	printf("%lld",num[n] *2+num[n-1]*4+num[n-2]*2);
}
