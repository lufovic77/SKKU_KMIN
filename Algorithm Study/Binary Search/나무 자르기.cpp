#include <stdio.h>
long long height[1000010];
int main(){
	int N,M;
	scanf("%d%d", &N,&M);
	int i;
	long long max=0;
	for(i=0;i<N;i++){
		scanf("%lld",height+i);
		if(height[i]>=max)
		max=height[i];
	}
	long long first=0,last=max;
	long long middle=(first+last)/2;
	long long sum=0;
	while(last-first>1){
		sum=0;
		middle=(first+last)/2;
		for(i=0;i<N;i++){
			if(height[i]>=middle)
			sum+=(height[i]-middle);
		}
		if(sum>=M)
		first=middle;
		else if(sum<M)
		last=middle;
	}
	printf("%lld", first);
}
