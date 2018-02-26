#include <stdio.h>
int n;
int num[100010];
int max=0;
int dp[100010][100010];
int continuous(int front, int end,int sum){
	if(end==n-1){
		continuous(front+1,front+1,0);
		return 0;
	}
	if(end>=n || front>=n)
	return 0;
	if(dp[front-1][end]!=0 && front>1){
		sum=dp[front-1][end];
		sum-=num[front-1];
		if(sum>=max)
		max=sum;
		dp[front][end]=sum;
		continuous(front,end+1,sum);
	}
	else{
		sum+=num[end];
		dp[front][end]=sum;
		if(sum>=max)
		max=sum;
		continuous(front,end+1,sum);
	}
	return dp[front][end];
}
int main(){
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d", num+i);
	int answer=continuous(0,0,0);
	printf("%d", max);
}
