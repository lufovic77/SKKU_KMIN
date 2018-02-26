#include <stdio.h>
int N;
int visited[100001];
int dp[3][100001];
int answer=0;
void zoo(int prev,int now){
	
	if(dp[prev][now]==1){
		answer++;
		answer=answer%9901;
		return;
	}
	
	if(now==N){
		answer++;
		answer=answer%9901;
		return;
	}
	dp[prev][now]=1;
	if(prev==0){	//no lions
	zoo(0,now+1);
	zoo(1,now+1);
	zoo(2,now+1);
	}
	else if(prev==1){	//left case 
	zoo(0,now+1);
	zoo(2,now+1);
	}
	else{	//right case (prev==2)	
	zoo(0,now+1);
	zoo(1,now+1);
	}
	//dp[prev][now]+=count%9901;
}
int main(){
	scanf("%d", &N);
	zoo(0,0);
	printf("%d", answer);
}
