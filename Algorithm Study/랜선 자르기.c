#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long long lan(long long*,long long,long long);
long long  k,n;


int main(){
	
	
	
//	printf("Type k and n :");
	 	
	scanf("%lld%lld", &k,&n);
	
	long long* array=(long long*)malloc(sizeof(long long)*k);
	
	int i;
	
//	printf("number : ");	
	
	for(i=0;i<k;i++)
	scanf("%lld", &array[i]);
	
	
	long long answer;
	answer = lan(array,0,2147483647);		//1부터 21억까지 하면 오버플로우가 발생 !!!!
	
	printf("%lld", answer);
	
} 


long long lan(long long* array,long long min, long long max){
	
	//printf("min: %d, max: %d\n", min, max);
	
	long long middle;
		
	long long sum=0;
	long long ans=0, i;
	while(min<=max){
	//	printf("answer is : %d\n", ans);
		sum=0;
		middle=((min+max)/2);
		
		for(i=0;i<k;i++){
			sum+=(array[i]/middle);
					
		}
		
		if(sum>=n){
			ans = middle;
			min=(middle+1);
		}
		
		else
			max=(middle-1);
	}
	return ans;
}
