#include <stdio.h>
#include <memory.h>
int size;
int interval;
int finding;
void KIN(int answer,int now,int visited[]){
	int count=interval;
	while(count!=0){
		now++;
		if(now>=size)
		now=0;
		if(visited[now]==1)
		continue;
		
		count--;
		
	if(now==finding && count==0){
		printf("f:%d now:%d a: %d",finding,now, answer);
		return ;
	}
	}

printf("niw:%d\n",now);	visited[now]=1;
	KIN(answer+1,now,visited);
}

int main(){
	scanf("%d%d%d", &size,&interval,&finding);
	finding=finding-1;
	int visited[size-1];
	memset(visited,0,sizeof(visited));
	int i;
	
	KIN(1,-1,visited);
}
