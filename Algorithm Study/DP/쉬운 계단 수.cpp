#include <stdio.h>
#include <memory.h>
int count=0;
int dp[1000][11];
long long sum=0;
int temp=0;
int stair(int now,int N){

	if(now==-1 || now==10 )
	return 0;
//	if(dp[N][now]!=-1){ printf("dp:%d\n", dp[N][now]); return dp[N][now];}
	else if(N==1){
	//	if(now==0)
	//		return 0;
		return 1;
	}

	else{
		if(dp[N][now]!=-1)
		return  dp[N][now];
		else{
			dp[N][now]= (stair(now+1,N-1)+stair(now-1,N-1))%1000000000;
			return dp[N][now];
		}
	}

}
int main(){
	int N;
	int now;
	scanf("%d", &N);
	temp=N;
	int i,j;
//	dp[1][N]=0;
	for(now=1;now<=9;now++){
		for(i=0;i<1000;i++){
			memset(dp[i],-1,44);
		}
		count=0;
		sum+=stair(now,N)%1000000000;
	}
	printf("%lld",sum%1000000000);	
}
