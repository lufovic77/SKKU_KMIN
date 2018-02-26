#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int parent;
	int element;
	int index;
	struct node* next;
}NODE;
int visited[100010];
int ab[200010];
int queue[300100];
struct node tree[200010];
struct node tree2[200010];
int main(){
	int N;
	NODE* current;
	NODE* current2;
	scanf("%d", &N);
	int i;
	int a,b;
	for(i=1;i<=N;i++){
		tree[i].next=NULL;
	//	tree[i].index=0;
	}
	for(i=0;i<N-1;i++){
		scanf("%d%d", &a,&b);
		NODE* temp=(NODE*)malloc(sizeof(NODE));
		NODE* temp2=(NODE*)malloc(sizeof(NODE));	
		temp->next=NULL;
		temp->element=b;	
		temp2->next=NULL;
		temp2->element=a;
		current=&tree[a];
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=temp;
		current2=&tree[b];
		while(current2->next!=NULL){
			current2=current2->next;
		}
		current2->next=temp2;		
	}
	//이런식으로 하면 인접리스트 만들기  끝 
	int front=0,rear=0;
	queue[front]=1;
	int currentnode;
	i=0;
	int k=0;
	visited[1]=-1;
	
	
	while(front<=rear){
		k=0;
		currentnode=queue[front];
		front++;
		current=&tree[currentnode];
		
		//current=current->next;
		while(current!=NULL){
			
			if(current->element!=currentnode && visited[current->element]==0){
				rear++;
			
				queue[rear]=current->element;
				visited[current->element]=-1;
				ab[k]=current->element;
				k++;
			}
			current=current->next;
		}
		
		for(i=0;i<k;i++){
			tree2[ab[i]].parent=currentnode;
		}
		//bfs로 트리 만드는 과정을 이용하여 parent 배정 
	}
	for(i=2;i<=N;i++){
		printf("%d", tree2[i].parent);
		if(i!=N)
		printf("\n");
	}

	
}
