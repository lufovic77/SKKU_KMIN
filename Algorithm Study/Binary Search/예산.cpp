#include <stdio.h>
int money[10010];
int main(){
	int N,M;
	scanf("%d", &N);
	int i;
	int max=0;
	for(i=0;i<N;i++){
		scanf("%d", money+i);
		if(money[i]>=max)
		max=money[i];
	}
	scanf("%d", &M);
	int low=0, high=max;
	int middle;
	long long sum=0;
	while(high-low>1){
		sum=0;
		middle=(low+high)/2;
		for(i=0;i<N;i++){
			if(middle>=money[i])
			sum+=money[i];
			else
			sum+=(middle);
		}
		if(sum>=M)
		high=middle;
		else
		low=middle;
	}
	sum=0;
	for(i=0;i<N;i++){	
		if(high>=money[i])
		sum+=money[i];
		else
		sum+=(high);
	}
	if(sum>M)
	printf("%d", low);
	else
	printf("%d", high);	
	
}
