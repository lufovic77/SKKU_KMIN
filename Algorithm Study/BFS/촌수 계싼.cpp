#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	struct node* right;
	int element;
}NODE;
struct node family[110];
int queue[1000];
int queue2[1000];
int visited[110];
void makelist(int x, int y){
	NODE* temp;
	temp=&family[x];
	while(temp->right!=NULL){
		temp=temp->right;
	}	
	NODE* temp2;
	temp2=(NODE*)malloc(sizeof(NODE));
	temp2->element=y;
	temp->right=temp2;
	temp2->right=NULL;
}
int main(){
	int n;
	scanf("%d", &n);
	int wantx, wanty;
	scanf("%d%d", &wantx,&wanty);
	int m;
	if(wantx==wanty){
		printf("0");
		return 0;
	}
	scanf("%d", &m);
	int i;
	int front=0,rear=0;
	
	NODE*temp3;
	for(i=0;i<110;i++){	
		temp3=&family[i];
		temp3->right=NULL;
	}
	
	
	for(i=0;i<m;i++){
		int x,y;
		scanf("%d%d", &x,&y);
		makelist(x,y);
		makelist(y,x);
	}
	int count=0;
	int now=wantx;
	queue[0]=now;
	queue2[0]=0;
	while(front<=rear && now!=wanty){
		now=queue[front];
		visited[now]=1;
		count=queue2[front];
		front++;
		NODE* temp=&family[now];
		while(temp->right!=NULL){
			temp=temp->right;
			if(!visited[temp->element]){
				rear++;
				queue[rear]=temp->element;
				queue2[rear]=count+1;
			}
		}
	}
	if(wanty==now)
	printf("%d", count);
	else
	printf("-1");
}
