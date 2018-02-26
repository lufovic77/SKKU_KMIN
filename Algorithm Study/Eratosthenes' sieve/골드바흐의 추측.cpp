#include <stdio.h>
int num[1000001];
int prime[100000];
int main(){
	int i,j;
	int index=0;
	for(i=2;i<=1000000;i++){
		if(!num[i]){
			prime[index]=i;
			index++;
		}
		for(j=i*2;j<=1000000;j+=i){
			num[j]=1;
		}
	}
	int now;
	int input=1;
	while(input!=0){
		scanf("%d", &input);
		index=0;
		while(prime[index]<=input/2){
			int p=input-prime[index];
			if(num[p]==0){
				printf("%d = %d + %d\n", input,prime[index],p);
				break;
			}
			index++;
		}
	}
}
