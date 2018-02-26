#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <memory.h>
using namespace std;
int r[3]={1,1,0};
int c[3]={0,1,1};
int mr[3]={-1,-1,0};
int mc[3]={0,-1,-1};
int N,M;
int map[1001][1001];
int cache[1001][1001];
int dp(int y,int x){
	if(y==N && x==M){
		return map[N][M];
	}
	
	if(y==N){
		return dp(y,x+1)+map[y][x];
	}
	if(x==M){
		return dp(y+1,x)+map[y][x];
	}
	
	int &ret=cache[y][x];
	if(ret!=-1)
	return ret;
	
	int i;
	for(i=0;i<3;i++){
		ret=max(ret,dp(y+r[i],x+c[i])+map[y][x]);
	}
	return ret;
}

int main(){
	scanf("%d%d", &N,&M);
	int i,k;
	memset(cache,-1,sizeof(cache));
	for(i=1;i<=N;i++)
		for(k=1;k<=M;k++)
			scanf("%d",&map[i][k]);
	
	int answer=dp(1,1);
	printf("%d", answer);
}
