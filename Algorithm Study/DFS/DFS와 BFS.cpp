#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int element;
	struct node* next=NULL;
}NODE;
//링크드 리스트의 가장 맹점 -> 잘 지정 되지 않아 NULL 을 가리키고 있는 포인터를 derefernce
//하는 경우 바로 그냥 segment fault 난다!! 
NODE tree[100000];
NODE tree2[100000];
int stack[100000];
int queue[2][100000];
int visited[100000];
int main(){
	int N,M,V;
	scanf("%d%d%d", &N,&M,&V);
	int i;
	int a,b;
	NODE* now;
	NODE* now2;
	for(i=0;i<M;i++){
		scanf("%d%d", &a,&b);
		NODE* temp= (NODE*)malloc(sizeof(NODE));
		NODE* temp2= (NODE*)malloc(sizeof(NODE));
		temp->element=b;
		temp2->element=b;
		
		if(tree[a].next==NULL){
			temp->next=NULL;
			tree[a].next=temp;
		}	
		else{
			now=&tree[a];
			while(now->next->element>=b ) {
				now=now->next;
				if(now->next==NULL){
					break;
				}	
			}
			temp->next=now->next;
			now->next=temp;
		}
		if(tree2[a].next==NULL){
			temp2->next=NULL;
			tree2[a].next=temp2;
		}	
		else{
			now=&tree2[a];
			while(now->next->element<=b ) {
				now=now->next;
				if(now->next==NULL){
					break;
				}	
			}
			temp2->next=now->next;
			now->next=temp2;
		}
	}
	int top=0;
	stack[0]=V;
	int current;
	
	int count=0;
	while(top>=0 && count!=N){
		current=stack[top];
		count++;
		printf("%d", current);
		if(count!=N)
		printf(" ");		
		top--;
		
		now=tree[current].next;
		while(now!=NULL){
			top++;
			stack[top]=now->element;
			now=now->next;
		}		
	}
	printf("\n");
	int front=0,rear=0;
	count=0;
	queue[0][0]=V;
	queue[1][0]=count;
	visited[V]=1;
	
	while(front<=rear&&count!=N ){
		current=queue[0][front];
		count=queue[1][front]+1;
		front++;
		printf("%d", current);
		if(count!=N)
		printf(" ");
		
		now=tree2[current].next;
		while(now!=NULL && visited[now->element]==0){
			rear++;
			queue[0][rear]=now->element;
			queue[1][rear]=count;
			visited[now->element]=1;
			now=now->next;
		}		
	}
	return ;
}
