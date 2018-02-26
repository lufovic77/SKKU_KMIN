#include <stdio.h>
int map[300][300];
int path[2000];
int parent[2000];
int find(int n){
	if(parent[n]==-1)
	return n;
	parent[n]=find(parent[n]);
	return find(parent[n]);
}
void merge(int a,int b){
	a=find(a);
	b=find(b);
	if(a==b)
	return ;
	parent[b]=a;
}

int main(){
	int N,M;
	scanf("%d%d", &N,&M);
	int i,j;
	for(i=0;i<2000;i++)
	parent[i]=-1;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d", &map[i][j]);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(map[i][j]==1){
				if(map[j][i]==0)
				continue;
				merge(i,j);
				map[i][j]=0;
			}
		}
	}
	int temp=0;
	for(i=0;i<M;i++){
		scanf("%d", &temp);
		path[i]=temp-1;
	}	
	int a,b;
	a=find(path[0]);
	for(i=1;i<M;i++){
		b=find(path[i]);
		if(a!=b){
			printf("NO");
			return 0;
		}
		a=b;
	}
	printf("YES");	
}
