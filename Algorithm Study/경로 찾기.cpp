#include <stdio.h>
#include <memory.h>
void push(int);
void pop(void);
int nowindex=0;
int count=0,count2=0;
	int array[110][110];
	int stack[1000];
	int answer[110][110];
	int temp[110][110];
int main(){
	int N;
	int i,k;
	scanf("%d", &N);
	for(i=1;i<=N;i++){
		for(k=1;k<=N;k++){
			scanf("%d", &array[i][k]);
			temp[i][k]=array[i][k];
		}
	}
		
	int currentvertex,startvertex,findvertex;
int p,q;

for(p=1;p<=N;p++){
	for(q=1;q<=N;q++){
		if(array[p][q]==1){
			answer[p][q]=1;
			continue;
		}
		if(answer[p][q]==1){
			continue;
		}
		count=0;
		nowindex=0;
		currentvertex=p;
		findvertex=q;
		do{	
			for(k=1;k<=N;k++){
				if(array[currentvertex][k]!=0){
					array[currentvertex][k]=0;
					push(k);
					count++;
				}
			}
			currentvertex=stack[nowindex-1];	
			answer[p][currentvertex]=1;
			pop();
		}while(currentvertex!=findvertex && nowindex>=0);
	if(count>0){
		if(nowindex<0)
		answer[p][q]=0;
		else
		answer[p][q]=1;		
		memset(stack,0,100);
	
			for(i=1;i<=N;i++){
				for(k=1;k<=N;k++){
					array[i][k]=temp[i][k];
				}
			}
		}
	}	
}
	for(p=1;p<=N;p++){
		for(q=1;q<=N;q++){
			printf("%d ", answer[p][q]);
		}
		if(p!=N)
		printf("\n");
	}
}

void push (int vertex){
	stack[nowindex]=vertex;
	nowindex++;	
}
void pop(void){
	nowindex--;
	if(nowindex<0){
		return ;
	}
	stack[nowindex]=0;
}
