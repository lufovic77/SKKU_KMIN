#include <stdio.h>
int map[101][101];
int visited[101][101];
int trashx[10000];
int trashy[10000];
int max=0;
int count;
int M,N;
void dfs(int a,int b){
	count++;
	map[a][b]=0;
	int x[4]={1,0,-1,0};
	int y[4]={0,1,0,-1};
	int i;
	for(i=0;i<4;i++){
		int r=a+x[i];
		int c=b+y[i];
		if(r > 0 && r <= N && c > 0 && c <= M){
			if(map[r][c]==1){
			dfs(r,c);
		}
		}
	}
}
int main(){
	int K;
	scanf("%d%d%d", &N,&M,&K);
	int i;
	int a,b;
	for(i=0;i<K;i++){
		scanf("%d%d", &a,&b);
		trashx[i]=a;
		trashy[i]=b;
		map[a][b]=1;
	}
	for(i=0;i<K;i++){
		count=0;
		a=trashx[i];
		b=trashy[i];
		if(map[a][b]){
			dfs(a,b);
			if(max<=count)
			max=count;
		//	printf("c: %d",count); 
		}
		
	}
	printf("%d", max);
}
