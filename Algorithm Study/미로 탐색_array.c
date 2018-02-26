#include <stdio.h>
int visited[110][110];
int array[110][110];
int queue[3][3000];
int front=0,rear=0;
int main(){
	int N,M;
	int currentx,currenty;
	scanf("%d\n%d", &N,&M);
	int i,j;
	for(i=1;i<=N;i++){
		for(j=1;j<=M;j++){
			scanf("%1d",&array[i][j]); 		//이거 처음 알았음!%1d is available, and also using the string is also available. 
		}
	}	
	for(i=1;i<=N+1;i++)
	array[i][M+1]=0;
	for(i=1;i<=M+1;i++)
	array[N+1][i]=0;
	
	i=0;
	currentx=1,currenty=1;
	queue[0][0]=1;
	queue[1][0]=1;
	queue[2][0]=1;
	i++;
	int cnt=0;
	int m,n;
	while(currentx!=N || currenty!=M && front<=rear){
		cnt=queue[2][front];
		visited[currentx][currenty]=1;
		currentx=queue[0][front];
		currenty=queue[1][front];
		front++;
		if(array[currentx][currenty+1]==1 && visited[currentx][currenty+1]!=1){
			queue[0][i]=currentx;
			queue[1][i]=currenty+1;
			queue[2][i]=cnt+1;
			visited[currentx][currenty+1]=1;			//이거 생각 못함 why?
			i++;
		}
		if(array[currentx+1][currenty]==1 && visited[currentx+1][currenty]!=1){
			queue[0][i]=currentx+1;
			queue[1][i]=currenty;
			queue[2][i]=cnt+1;
			visited[currentx+1][currenty]=1;
			i++;
		}
		if(array[currentx][currenty-1]==1 && visited[currentx][currenty-1]!=1) {
			queue[0][i]=currentx;
			queue[1][i]=currenty-1;
			queue[2][i]=cnt+1;
			visited[currentx][currenty-1]=1;
			i++;
		}
		if(array[currentx-1][currenty]==1 && visited[currentx-1][currenty]!=1){
			queue[0][i]=currentx-1;
			queue[1][i]=currenty;
			queue[2][i]=cnt+1;
			visited[currentx-1][currenty]=1;
			i++;
		}
			rear=i-1;
	}
	printf("%d", cnt);
}
