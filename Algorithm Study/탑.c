#include <stdio.h>
int answer[5000001];
long long height[500010];
int main(){
	int N;
	scanf("%d",&N);
	
	int i,j;
	for(i=0;i<N;i++){
		
		scanf("%lld", &height[i]);
		if(i==0)
		continue; 			
		if(height[i]>height[i-1] && answer[i-1]==0){
			continue;	
		}
			for(j=i-1;j>=0;j--){
				if(height[i]>=height[j] && height[i]<=height[answer[j]-1]){
					answer[i]=answer[j];
					break;
					}
						if(height[i]<=height[j]){
					answer[i]=j+1;
					break;
				}
			}
		}
		
	for(i=0;i<N;i++){
		printf("%d ",answer[i]);
	}
}
