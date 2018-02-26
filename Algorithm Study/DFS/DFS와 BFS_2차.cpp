#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream> 
using namespace std;
typedef struct node{
	struct node* right;
	int data;
}NODE;
int n;
NODE graph[1000000];
int queue[1000000];
int visited[1000000];
int storage[1000000];
void push(int a,int b){
	NODE* temp=&graph[a];
	while(temp->right!=NULL)
	temp=temp->right;
	NODE* temp2;
	temp2=(NODE*)malloc(sizeof(NODE));
	temp2->data=b;
	temp2->right=NULL;
	temp->right=temp2;
}
void dfs(int now){
	if(visited[now])
	return;
	printf("%d ", now);
	NODE* temp=&graph[now];
	temp=temp->right;
	int index=0;
	int i;

	visited[now]=1;
	while(temp!=NULL){
		int a=temp->data;
		if(visited[a]!=1){
			storage[index]=a;
			index++;
		}
		temp=temp->right;
	}
	if(index==0)
	return ;
	sort(storage,storage+index-1);
	for(i=0;i<index;i++)
	dfs(storage[i]);
}
void bfs(int now,int front, int end){
	int i;
	
	queue[front]=now;
int count=0;
	while(front<=end && count<n){
		int index=0;
		count++;
		int data=queue[front];
		printf("%d ", data);
		visited[data]=1;
		NODE* temp=&graph[data];
		front++;
		while(temp!=NULL){
			int a=temp->data;
			if(visited[a]!=1){
				storage[index]=a;
				index++;
			}
			temp=temp->right;
		}
		if(index==0)continue ;
		sort(storage,storage+index-1);
		for(i=0;i<index;i++,end++)
		queue[end]=storage[i];
	}
}
int main(){
	int m,v;
	scanf("%d%d%d", &n,&m,&v);
	int i;
	for(i=1;i<=n;i++)
	graph[i].right=NULL;
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d", &a,&b);
		push(a,b);
		push(b,a);
	}
	dfs(v);
	memset(visited,0,sizeof(visited));
	printf("\n");
	bfs(v,0,0);
}

