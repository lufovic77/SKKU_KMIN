#include <stdio.h>
int tomato[1010][1010];
int visited[1010][1010];
int queue[3][1000100];
int one[2][1010];
int main(){	
	int i,k;
	int N,M;
	int index=0; int temp=0;
	scanf("%d%d", &N,&M);
	for(i=0;i<M;i++)
		for(k=0;k<N;k++){
			scanf("%d", &tomato[i][k]);
			if(tomato[i][k]==1){
				one[0][index]=i;
				one[1][index]=k;
				index++;
			}
			if(tomato[i][k]==-1)
			temp++;
			
		}	
		if(index==M*N-temp){
			printf("0");
			return 0;
		}
		if(index==0){
			printf("-1");
			return 0;
		}
		int count=0;
	for(i=0;i<index;i++){
		queue[0][i]=one[0][i];
		queue[1][i]=one[1][i];
		queue[2][i]=0;
	}
	int currentx,currenty;
	int front=0, rear=0;
	while(front<=rear){
		currentx=queue[0][front];
		currenty=queue[1][front];
		count=queue[3][front]+1;
		front++;
		if(tomato[currentx][currenty+1]==0 && visited[currentx][currenty+1]==0 && currenty+1<N){
			rear++;
			queue[0][rear]=currentx;
			queue[1][rear]=currenty+1;
			queue[3][rear]=count;
			visited[currentx][currenty+1]=-1;
		}
		if(tomato[currentx+1][currenty]==0 && visited[currentx+1][currenty]==0 && currentx+1<M){
			rear++;
			queue[0][rear]=currentx+1;
			queue[1][rear]=currenty;
			queue[3][rear]=count;
			visited[currentx+1][currenty]=-1;
		}
		if(tomato[currentx][currenty-1]==0 && visited[currentx][currenty-1]==0 && currenty-1>=0){
			rear++;
			queue[0][rear]=currentx;
			queue[1][rear]=currenty-1;
			queue[3][rear]=count;
			visited[currentx][currenty-1]=-1;
		}
		if(tomato[currentx-1][currenty]==0 && visited[currentx-1][currenty]==0 && currentx-1>=0){
			rear++;
			queue[0][rear]=currentx-1;
			queue[1][rear]=currenty;
			queue[3][rear]=count;
			visited[currentx-1][currenty]=-1;
		}
	//	if()
	}
	for(i=0;i<M;i++){
		for(k=0;k<N;k++){
			if(tomato[i][k]==0 && visited[i][k]==0){
				printf("-1");
				return 0;
			}
		}
	}
		printf("%d", count-1);
}
