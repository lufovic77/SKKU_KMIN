#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node * right;
}NODE;
int visited[501];
NODE friends[501];
void push(int a,int b){
	NODE *temp=&friends[a];
	while(temp->right!=NULL)
	temp=temp->right;
	NODE *temp2=(NODE*)malloc(sizeof(NODE));
	temp2->data=b;
	temp2->right=NULL;
	temp->right=temp2;
	return ;
}
int answer=0;
void dfs(int now,int count){
	if(count>=3)
	return ;
	visited[now]=1;
	NODE *temp=&friends[now];
	temp=temp->right;
	while(temp!=NULL){
		int data=temp->data;
		if(visited[data]!=1){
			dfs(data,count+1);
			answer++;
		}
		temp=temp->right;
	}
}
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	int i;
	for(i=1;i<=500;i++) 
	friends[i].right=NULL;
	
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d", &a,&b);
		push(a,b);
		push(b,a);
	}
	
	dfs(1,0);
	printf("%d", answer);
	
}
