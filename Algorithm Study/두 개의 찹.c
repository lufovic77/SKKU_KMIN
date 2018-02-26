#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int dist[200000];	
	int i,j;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d", (dist+i));
		sum+=*(dist+i);
	}
	
	int result1=0,result2=0;
	i=0;
	int k=0;
	int q=0;
	int array[200000];
	int max=-1;
	
	for(i=0;i<(n-1);i++){
		
		for(j=i;j<n;j++){
			result1=0;
			result2=0; 
			
			for(k=(i+1);k<j;k++){
				result1+=dist[k];
				result2=sum-result1;
			}	
			if(result1>result2){
				if(result2>=max)
				max=result2;
			}
			else{
				if(result1>max)
				max=result1;
			}
			
		}
		
	}
	
	printf("%d", max);
} 
