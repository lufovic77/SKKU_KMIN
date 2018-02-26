#include <stdio.h>
int visited[4];
void subset(int depth){
	int i;
	if(depth==0){
		for(i=1;i<=3;i++)
		if(visited[i]==1)
		printf("%d ", i);
		printf("\n");
		return ;
	}
	visited[depth]=0;
	subset(depth-1);
	visited[depth]=1;
	subset(depth-1);
	
}
int main(){
	subset(3);
}
