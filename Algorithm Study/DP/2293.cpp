#include <stdio.h>
#include <memory.h>
int coin[101];
int dp[10001];//index of this array means the amount of money left. 
				//the value means the index.

int main(){
	int n,k;
	scanf("%d%d", &n,&k);
	int i,j;
	for(i=1;i<=n;i++)
	scanf("%d", &coin[i]);
	
	dp[0]=1;
	
	for(j=1;j<=n;j++){
		for(i=1;i<=k;i++){
			if(i-coin[j]>=0){
				dp[i]+=dp[i-coin[j]];
			}
		}
	}
	
	printf("%d", dp[k]);
	return 0;
	
}
