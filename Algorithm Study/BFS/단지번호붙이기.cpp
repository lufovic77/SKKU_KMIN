#include <stdio.h>
#include <cstdio>
#include <algorithm>
using namespace std;
int map[30][30];
int visited[30][30];
int r[4]={0,0,1,-1};
int c[4]={1,-1,0,0};
int answer[1000];
int n;
void bfs(int x,int y,int count){
	if(visited[x][y]==1)
	return ;
	answer[count]++;
	visited[x][y]=1;
	int i; 
	for(i=0;i<4;i++){
		int nowr=x+r[i];
		int nowc=y+c[i];
		if(map[nowr][nowc]==1 && visited[nowr][nowc]!=1 && nowr>=0 && nowr<n && nowc>=0 && nowc<n){
			bfs(nowr,nowc,count);
		}		
	}	
	return ;
}
int main(){
	int count=1;
	scanf("%d", &n);
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		scanf("%1d", &map[i][j]);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(map[i][j]==1 && visited[i][j]!=1){
				bfs(i,j,count);
				count++;
			}
		}
	}
	if(count==1){
		printf("0\n");
		return 0;
	}
	
	sort(answer+1,answer+count);
	printf("%d\n", count-1);
	for(i=1;i<count;i++)
	printf("%d\n", answer[i]);
}
