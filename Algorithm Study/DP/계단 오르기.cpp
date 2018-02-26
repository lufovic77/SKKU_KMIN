#include <stdio.h>
#include <cstdio>
#include <algorithm>
#include <memory.h>
using namespace std;
int n;
int num[310];
int dp[2][310];

int stair(int prev, int now){
	if(dp[prev][now]!=0){
		return dp[prev][now];
	}
	
	dp[prev][now]=num[now];
	
//	if(now==n){
//		return dp[prev][now];
//	}

	if(now==n-2){
		dp[prev][now]+=stair(1,now+2);
		return dp[prev][now];
	}
	if(now==n-1){
		dp[prev][now]+=stair(0,now+1);
		return dp[prev][now];	
	}
	
	if(now>n)
	return 0;
	if(prev==0){
		dp[prev][now]+=stair(1,now+2);
	}
	else{
		dp[prev][now]+=max(stair(0,now+1), stair(1,now+2));
	}
	return dp[prev][now];
}

int main(){
	scanf("%d", &n);
	int i;
	for(i=1;i<=n;i++)
	scanf("%d", num+i);
	
	int a=stair(1,1);
	memset(dp,0,sizeof(dp));
	int b=stair(1,2);
	printf("%d", max(a,b)); 
}
