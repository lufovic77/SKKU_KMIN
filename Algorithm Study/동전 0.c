#include <stdio.h>

int main(){
	int N;
	long long K;
	scanf("%d%lld", &N,&K);
	int array[20];
	int i;
	int index=0;
	for(i=0;i<N;i++){
		scanf("%d", &array[i]);
	}
	int attempt=0;
	long long sum=0;
	long long ans=0;
	while(K!=0){
		ans=(long long)K/(long long)array[N-1];
		K-=array[N-1]*ans;
		attempt+=ans;
		N--;
		}
	printf("%d", attempt);
	
}
