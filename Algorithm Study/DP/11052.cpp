#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int N;
int cache[1001][1001];
int cost[1002];
int check=0;
int dp(int index,int left){
	if(index>N)
	return 0;
	if(left<0)
	return 0;
	if(left==0){
		check++;
		return 0;
	}
	int &ret=cache[index][left];
	if(ret!=-1)
	return ret;
	int i;
	for(i=0;left-i*index>=0;i++){
		ret=max(ret,dp(index+1,left-i*index)+i*cost[index]);
	}
return ret;	
		
}
int main(){
	scanf("%d",&N);
	int i,k;
	for(i=0;i<=1000;i++){
		for(k=0;k<=1000;k++)
		cache[i][k]=-1;
	}
	for(i=1;i<=N;i++)
	scanf("%d", &cost[i]);
	int answer=dp(1,N);
	cout<<answer;
}
