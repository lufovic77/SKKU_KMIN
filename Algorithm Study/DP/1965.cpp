#include <stdio.h>
#include <memory.h>
#include <algorithm>
using namespace std;
int num[1001];
int dp[1001];
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", num+i);
		dp[i]=1;
	}
	if(n==1){
		printf("1");	//Base case. Is it right?
		return 0;
	}
	dp[0]=1;	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(num[i]>num[j]&&dp[j]+1>dp[i]){
				dp[i]=dp[j]+1;
			}
		}
	}
	int answer=-1;
	for(i=0;i<n;i++)
	answer=max(answer,dp[i]);
	printf("%d", answer);
}
