#include <stdio.h>
	int queue[3][100000];
	int visited[402][402];
int bfs(int startrow, int startcol,int endrow,int endcol,int l){
	int i,j;
	for(i=0;i<l;i++){
		for(j=0;j<l;j++)
		visited[i][j]=0;
	}
	int currentrow,currentcol;
	int front=0,rear=0;
	int count=0;
	currentrow=startrow;
	currentcol=startcol;
	queue[0][front]=currentrow;
	queue[1][front]=currentcol; //1 60 54 43 1 1
	queue[2][front]=count;
	while(currentrow!=endrow || currentcol!=endcol && front<=rear){
		currentrow=queue[0][front];
		currentcol=queue[1][front];
		count=queue[2][front]+1;
		front++;
		if(visited[currentrow-2][currentcol+1]==0 && currentrow-2>-1 && currentcol+1<l){
			rear++;
			queue[0][rear]=currentrow-2;
			queue[1][rear]=currentcol+1;
			queue[2][rear]=count;
			visited[currentrow-2][currentcol+1]=1;
		}if(visited[currentrow-1][currentcol+2]==0 && currentrow-1>-1 && currentcol+2<l){
			rear++;
			queue[0][rear]=currentrow-1;
			queue[1][rear]=currentcol+2;
			queue[2][rear]=count;
			visited[currentrow-1][currentcol+2]=1;
		}if(visited[currentrow+1][currentcol+2]==0 && currentrow+1<l && currentcol+2<l){
			rear++;
			queue[0][rear]=currentrow+1;
			queue[1][rear]=currentcol+2;
			queue[2][rear]=count;
			visited[currentrow+1][currentcol+2]=1;
		}if(visited[currentrow+2][currentcol+1]==0 && currentrow+2<l && currentcol+1<l){
			rear++;
			queue[0][rear]=currentrow+2;
			queue[1][rear]=currentcol+1;
			queue[2][rear]=count;
			visited[currentrow+2][currentcol+1]=1;
		}if(visited[currentrow+2][currentcol-1]==0 && currentrow+2<l && currentcol-1>-1){
			rear++;
			queue[0][rear]=currentrow+2;
			queue[1][rear]=currentcol-1;
			queue[2][rear]=count;
			visited[currentrow+2][currentcol-1]=1;
		}if(visited[currentrow+1][currentcol-2]==0 && currentrow+1<l && currentcol-2>-1){
			rear++;
			queue[0][rear]=currentrow+1;
			queue[1][rear]=currentcol-2;
			queue[2][rear]=count;
			visited[currentrow+1][currentcol-2]=1;
		}if(visited[currentrow-1][currentcol-2]==0 && currentrow-1>-1 && currentcol-2>-1){
			rear++;
			queue[0][rear]=currentrow-1;
			queue[1][rear]=currentcol-2;
			queue[2][rear]=count;
			visited[currentrow-1][currentcol-2]=1;
		}if(visited[currentrow-2][currentcol-1]==0 && currentrow-2>-1 && currentcol-1>-1){
			rear++;
			queue[0][rear]=currentrow-2;
			queue[1][rear]=currentcol-1;
			queue[2][rear]=count;
			visited[currentrow-2][currentcol-1]=1;
		}
	}
	return count-1;
}
int main(){
	int testcase;
	scanf("%d", &testcase);
	int i;
	int a,b,c,d; 
	int count=0;
	int l;
	for(i=0;i<testcase;i++){
		scanf("%d", &l);
		scanf("%d%d%d%d", &a,&b,&c,&d);
		if(a==c && b==d){
			printf("0");
			if(i!=testcase-1)
			printf("\n");
			continue;
		}
		int answer=bfs(a,b,c,d,l);
		printf("%d", answer);
		if(i!=testcase-1)
		printf("\n");
	}
}
