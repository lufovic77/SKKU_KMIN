#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int* num = (int*)malloc(4*n);
	
	int i;
	for(i=0;i<n;i++)
	scanf("%d", (num+i));
	
	int max=0,temp=0;
	max=num[0];
	
	for(i=0;i<n;i++){
		
		if(num[i-1]<0 &&num[i]>0)
		temp=num[i];
		
		
		if(temp>max)
		max=temp;
		
		if(num[i]>=max){
			max=num[i];
			
			
		}
		
		
		if(num[i]>0&&num[i+1]>0)
		temp+=num[i+1];
		
		if(i==n-1){
			if(num[i]>=max)
			max=num[i];
			else
			continue;
			
		}
	}
		
	printf("%d",max);
	
}
