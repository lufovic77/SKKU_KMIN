#include <stdio.h>
#include <stdlib.h> 
typedef struct node{
	int element;
	struct node* right;
}NODE;
struct node list[8];
void push(int a, int b){
	NODE* temp;
	temp=&list[a];
	while(temp->right!=NULL)
	temp=temp->right;
	NODE* temp2;
	temp2=(NODE*)malloc(sizeof(NODE));
	temp2->element=b;
	temp2->right=NULL;
	temp->right=temp2;
}
int count=0;
int N;
int min[8]={0,1,1,2,2,3,4,3};
int visited[8];
void dfs(int node, int check){
	//printf("?");
	if(node==1 && check==N){
		count++;
		count%=1000000007;
		return ;
	}
	if(check>N)
	return ;
	if((check+min[node])>(N))
	return ;
//	visited[node]=1;
	NODE* temp=&list[node];
	temp=temp->right;
	while(temp!=NULL){
		int now=temp->element;
		if(!visited[now])
		dfs(now,check+1);
		temp=temp->right;
	}
	visited[node]=0;
}
int main(){
	int i;
	for(i=1;i<=8;i++)
	list[i].right=NULL;
	push(1,2);push(1,3);push(2,1);push(2,3);push(2,4);push(3,1);push(3,2);push(3,4);push(3,5);push(4,5);push(4,6);push(4,3);push(4,2);push(5,3);push(5,4);push(5,6);push(5,8);
	push(6,4);push(6,5);push(6,7);push(7,6);push(7,8);push(8,7);push(8,5);
	scanf("%d", &N);
	dfs(1,0);
	printf("%d", count);
}
