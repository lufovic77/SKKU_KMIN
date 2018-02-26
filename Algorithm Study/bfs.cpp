#include <stdio.h>
void push(int);
void pop(void);
int front=0;
	int nowindex=0;
	int array[110][110];
	int queue[10000];
	int answer[110][110];
int main(){
	int M,N;
	int i,k;
	scanf("%d", &N);
	M=N;
	for(i=1;i<=M;i++){
		for(k=1;k<=N;k++){
			scanf("%d", &array[i][k]);
		}
	}
	int currentvertex,startvertex,findvertex;
	scanf("%d%d", &startvertex,&findvertex);
	currentvertex=startvertex;
	do{	
	
		for(k=1;k<=N;k++){
			if(array[currentvertex][k]!=0){
				array[currentvertex][k]=0;
				push(k);
			}
		}
		////////////////
		printf("queue : " );
		for(int h=0;h<50;h++){
			printf("%d ", queue[h]);			
		}
		////////////////	print the queue
		currentvertex=queue[front];
		pop();
		if(nowindex<front)
		break;
		////////////////
		if(findvertex==queue[nowindex-1])
		break;
		printf("curent:%d find:%d\n",currentvertex,findvertex);

	}while(currentvertex!=findvertex);
	if(nowindex<front)
	printf("NONE"); 
	else
	printf("%d %d", currentvertex,findvertex);
}
void push(int vertex){
	queue[nowindex]=vertex;
	nowindex++;			//Actually, the nowindex is same with the rear position
}
void pop(void){
	queue[front]=0;
	front++;
}
