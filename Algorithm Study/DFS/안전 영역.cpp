#include <stdio.h>
int map2[100][100];
int map[100][100];
int safex[10000];
int safey[10000];
int N;
void dfs(int row,int col){
	map2[row][col]=0;
	int x[4]={0,0,1,-1};
	int y[4]={1,-1,0,0};
	int i;
	for(i=0;i<4;i++){
		int r=row+x[i];
		int c=col+y[i];
		if(r>-1&&c>-1&&r<N&&c<N){
			if(map2[r][c])
			dfs(r,c);
		}
	}
	
}
int main(){
	int i,j;
	int max=0;
	scanf("%d", &N);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			scanf("%d", &map[i][j]);
			if(map[i][j]>=max)
			max=map[i][j];
		}
	int m,n;
	int index;
	int count; 
	int countmax=0;
	for(i=0;i<max;i++){
		index=0;
		count=0;
		for(m=0;m<N;m++)
			for(n=0;n<N;n++){
				if(map[m][n]<=i)
				map2[m][n]=0;
				else{
					map2[m][n]=1;
					safex[index]=m;
					safey[index]=n;
					index++;
				}
			}
		for(j=0;j<index;j++){
			int a=safex[j];
			int b=safey[j];
			if(map2[a][b]){
				dfs(a,b);
				count++;
			}
		}	
		if(count>=countmax)
		countmax=count;
	}
	printf("%d", countmax);
	
}
