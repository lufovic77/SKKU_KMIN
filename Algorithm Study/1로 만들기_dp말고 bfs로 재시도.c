#include <stdio.h>
int queue[2][10000000];
int visited[1000000];
int main(){
	int N;
	scanf("%d", &N);
	int current=N;
	int front=0,rear=0;
	visited[current]=-1;
	int count =0; 
	int i;
	queue[0][front]=current;
	queue[1][front]=count;
	while(current!=1){
		current=queue[0][front];
		count=queue[1][front];
		front++;		
		if(current%3==0 && visited[current/3]==0){
			rear++;
			queue[0][rear]=current/3;
			queue[1][rear]=count+1;
			visited[current/3]=-1;
		}
		if(current%2==0 && visited[current/2]==0){
			rear++;
			queue[0][rear]=current/2;
			queue[1][rear]=count+1;
			visited[current/2]=-1;
		}
		if(visited[current-1]==0&&current-1>=0){
			rear++;
			queue[0][rear]=current-1;
			queue[1][rear]=count+1;
			visited[current-1]=-1;
		}
	}
	printf("%d", count);
}
