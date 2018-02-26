#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cstdio>
#include <memory.h> 
using namespace std;
typedef struct node{
	struct node* right;
	int element;
}NODE;
struct node tree[1000010];
int visited[1000010];
int dp[1000010][3];
NODE* last[1000010];
int sns(int node, int ispicked){
	if(dp[node][ispicked]!=0)
	return dp[node][ispicked];
	visited[node]=1;
	
	if(ispicked)
	dp[node][ispicked]=1;
	
	NODE *temp;
	int answer=0;
	temp=&tree[node];
	temp=temp->right;
	if(ispicked==0){
		while(temp!=NULL){
			int now=temp->element;
			if(visited[now])
			temp=temp->right;
			else{
				dp[node][ispicked]+=(sns(now,1));
				temp=temp->right;		
			}
		}
	}
	if(ispicked==1){
		while(temp!=NULL){
			int a=0,b=0;
			int now=temp->element;
			if(visited[now])
			temp=temp->right;
			else{
				dp[node][ispicked]+=min(sns(now,1),sns(now,0));
				temp=temp->right;
			}
		}
		
	}
	visited[node]=0;
	return dp[node][ispicked];
	
}
void push(int a,int b){
	NODE* temp=last[a];
	NODE* temp2;
	temp2=(NODE*)malloc(sizeof(NODE));
	temp2->element=b;
	temp2->right=NULL;
	temp->right=temp2;
	last[a]=temp2;
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i=1;i<=n;i++){
		tree[i].right=NULL;
		last[i]=&tree[i];
	}
	for(i=1;i<=n-1;i++){
		int a,b;
		scanf("%d%d", &a,&b);
		push(a,b);
		push(b,a);
	}
	int answer=0;
	answer=min(sns(1,1),sns(1,0));
	printf("%d",answer);
}
