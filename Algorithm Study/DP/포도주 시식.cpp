#include <stdio.h>
#include <cstdio>
#include <memory.h>
#include <algorithm>
using namespace std;
int n;
int grape[10010];
int dp[2][10010];

int drink(int prev,int now){
	if(dp[prev][now]!=0)
	return dp[prev][now];
	
	if(now>n)
	return 0;
	
	int i;
	int maximum;
	if(prev==1){
		maximum=drink(0,now+2);
		for(i=3;i<=n-now;i++){
			maximum=max(maximum,drink(0,now+i));
		}
		dp[prev][now]=maximum+grape[now];
	}
	else{
		maximum=drink(1,now+1);
		for(i=2;i<=n-now;i++){
			maximum=max(maximum,drink(0,now+i));
		}
		dp[prev][now]=maximum+grape[now];
	}
	
	return dp[prev][now];
}

int main(){
	scanf("%d", &n);
	int i;
	for(i=1;i<=n;i++)		
	scanf("%d", grape+i);
	
	int a=drink(0,1);
	memset(dp,0,sizeof(dp));
	int b=drink(0,2);
	printf("%d", max(a,b));
	
}
