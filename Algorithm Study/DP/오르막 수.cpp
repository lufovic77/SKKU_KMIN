#include <stdio.h>
#include <memory.h>
int N;
int dp[1000][1000];

int climb(int now,int n){
	int count=0;
	if(n==0 || now==10)
	return 0;
	else if(now==9)
	return 1;
	else{
		if(dp[now][n]!=0) return dp[now][n];
		else{	
			int i;
			for(i=now;i<=9;i++){
				dp[now][n]+=climb(i,n-1)%10007;
			}
		}
	}
	return dp[now][n];
}
int main(){
	//int N;
	scanf("%d", &N);
	int i;
//	for(i=0;i<1000;i++)
//	memset(dp[i],0,4000);
	int a=0;
	for(i=0;i<=9;i++)
	a+=climb(i,N+1)%10007;
	printf("%d",a%10007);
}
