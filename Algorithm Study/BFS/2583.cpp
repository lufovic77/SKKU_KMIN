#include <iostream>
#include <algorithm>
using namespace std;
int r[4]={0,0,1,-1};
int c[4]={1,-1,0,0};
int map[110][110];
int visited[110][110];
int m,n,k;
void fill(int x1,int y1, int x2, int y2){
	for(int i=x1;i<x2;i++){
		for(int j=y1;j<y2;j++)
		map[i][j]=0;
	}
}
int dfs(int row,int col){
	if(row>=m || col>=n || row<0  || col<0)
	return 0;
	if(visited[row][col]==1 || map[row][col]==0)
	return 0;
	visited[row][col]=1;
	int i,j;
	int result=0;
	for(i=0;i<4;i++){
		int nr=row+r[i];
		int nc=col+c[i];
		result+=dfs(nr,nc);
	}
	return result+1;
}

int main(){
	cin>>m>>n>>k;
	int i,j;
	for(i=0;i<110;i++)
	fill(map[i],map[i]+110,1);
	
	for(i=0;i<k;i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		fill(y1,x1,y2,x2);
	}
	int area[10100];
	int index=0;
	int answer=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){		
			answer=0;
			if(visited[i][j]==0 && map[i][j]==1){
			answer=dfs(i,j);
			}	
			if(answer!=0){
				area[index]=answer;
				answer=0;
				index++;
			}
		}	
	}
	sort(area,area+index);
	cout<<index<<endl;
	for(i=0;i<index;i++)
	cout<<area[i]<<" ";
}
