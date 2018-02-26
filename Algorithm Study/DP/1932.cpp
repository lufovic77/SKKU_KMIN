#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <memory.h>
using namespace std;
int cache[500][500];
int map[500][500];
int n;
int dp(int y,int x){
	if(y==n-1)
	return map[y][x];
	
	int &ret=cache[y][x];
	if(ret!=-1)
	return ret;
	return ret=max(dp(y+1,x),dp(y+1,x+1))+map[y][x];

}
int main(){
	scanf("%d", &n);	
	int i,j,k;
	for(i=0;i<500;i++)
		for(k=0;k<500;k++)
			cache[i][k]=-1;
	for(i=0;i<n;i++){
		for(k=0;k<=i;k++)
		scanf("%d", &map[i][k]);
	}
	int sum=0;
	int answer=dp(0,0);
	printf("%d", answer);
}
