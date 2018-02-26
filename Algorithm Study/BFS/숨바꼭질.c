#include <stdio.h>
int queue[2][200010];
int visited[100010];
int main(){
	int N,K;
	scanf("%d%d", &N,&K);
	int X;
	X=N;
	int start, end;
	start=N;
	end=K;
	int front=0,rear=1;
	visited[0]=1;
	queue[0][0]=start;
	int count=0;
	queue[1][0]=count;
	int i;
	if(K<=N){
		printf("%d", N-K);
		return ;
	}
	while(X!=end && front<=rear){
		X=queue[0][front];
		count=queue[1][front]+1;
		front++;
		if(visited[X+1]==0 && X+1<=100001){
			queue[0][rear]=X+1;
			visited[X+1]=1;
			queue[1][rear]=count;
			rear++;
		}
		if(visited[X-1]==0 && X-1>=-1){
			queue[0][rear]=X-1;
			visited[X-1]=1;
			queue[1][rear]=count;
			rear++;
		}
		if(visited[X*2]==0 && X*2<=100001 &&X!=0){
			queue[0][rear]=X*2;
			visited[X*2]=1;
			queue[1][rear]=count;
			rear++;
		}
	}
	printf("%d", count-1);
}
