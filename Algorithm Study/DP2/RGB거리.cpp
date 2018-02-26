#include <stdio.h>
#include <cstdio>
#include <algorithm>
#include <memory.h>
const int INF = 1000000000;
using namespace std;
int coloring[1001][3];
int dp[4][1010];
int n;
/*
int RGB(int pos, int prev=3){
    int& ret = dp[pos][prev];
    if(ret != -1) return ret;
    if(pos == n) return ret = 0;
 
    ret = INF;
    for(int i=0; i<3; i++)
        if(prev != i) ret = min(ret, RGB(pos+1, i) + preving[pos][i]);
    return ret;
}
*/
int rgb(int prev, int house){
	if(dp[prev][house]!=-1)
	return dp[prev][house];
    if(house == n) return 0;
	
	printf("?");
	dp[prev][house]=100000000;
	int i;
	for(i=0;i<3;i++){
		if(prev!=i )	dp[prev][house]=min(dp[prev][house],rgb(i,house+1)+coloring[house][i]);
	}
	return dp[prev][house];
}
void trackanswer(int house,int prev){
		printf("s");
	int i;
	if(house==n)
	return ;
	for(i=0;i<3;i++){
		if(prev!=i && rgb(3,house)==(rgb(i,house+1)+coloring[house][i])){
			printf("%dth answer:%d\n", house+1,i);
			trackanswer(house+1,i);
			return ;
		}
	}	
}
int main(){
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++){
		int a,b,c;
		scanf("%d%d%d", &a,&b,&c);
		coloring[i][0]=a;
		coloring[i][1]=b;
		coloring[i][2]=c;
	}
	
	memset(dp,-1,sizeof(dp));
	int minimum=rgb(3,0);
	printf("%d", minimum);
	
	printf("\n\n");
	trackanswer(0,3);
}

