#include <stdio.h>
int queue[2][1000001];
int floor[1000001];
int visited[1000001];
int main(){
	int F,S,G,U,D;
	scanf("%d%d%d%d%d", &F,&S,&G,&U,&D);
	int front=0,rear=0;
	int temp=S;
	int count=0;
	queue[0][0]=S;
	queue[1][0]=1;
	visited[temp]=1;
	int j;
	if(S==G){
		printf("0");
		return 0;
	}
	while(front<=rear && temp!=G){
		temp=queue[0][front];
		count=queue[1][front];	
		front++;		
		if((temp+U)>F && (temp-D)<1){
			printf("use the stairs");
			return 0;
		}
		if(temp==G){
			printf("%d", count-1);
			return 0;
		}
		if((temp+U)<=F && visited[temp+U]==0){
			rear++;
			queue[0][rear]=temp+U;
			queue[1][rear]=count+1;
			visited[temp+U]=1;
		}
		if((temp-D)>=1 && visited[temp-D]==0){
			rear++;	
			queue[0][rear]=temp-D;
			queue[1][rear]=count+1;
			visited[temp-D]=1;
		}
	}
	if(temp!=G)
	printf("use the stairs");
}
