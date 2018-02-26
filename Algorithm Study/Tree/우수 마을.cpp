#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef struct node{
	struct node* right;
	int population;
	int element;
}NODE;
struct node tree[100010];
void push(int a,int b){
	NODE* temp;
	temp=&tree[a];
	while(temp->right!=NULL)
	temp=temp->right;
	NODE* temp2;
	temp2=(NODE*)malloc(sizeof(NODE));
	temp2->element=b;
	temp2->right=NULL;
	temp->right=temp2;
}
int visited[10010];
int dp[10010][3];
int best(int node, int state){
	if(dp[node][state]!=0){
	//	printf("?");
		return dp[node][state];
	}
	visited[node]=1;
	
	if(state==1)
	dp[node][state]=tree[node].population;
	int answer;
	NODE* temp=&tree[node];
	temp=temp->right;
	while(temp!=NULL){
		int now=temp->element;
		int choose=0;
		if(visited[now]){
			temp=temp->right;
		}
		else{
			if(state==1){
				dp[node][state]+=best(now,0);
			}
			else{
				dp[node][state]+=max(best(now,1),best(now,0));
			}
		
			temp=temp->right;
		}
	}
	visited[node]=0;
	return dp[node][state];
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i=1;i<=n;i++){
		int c;
		scanf("%d", &c);
		tree[i].population=c;
	}
	for(i=1;i<=n;i++)
	tree[i].right=NULL;
	int root;
	for(i=1;i<=n-1;i++){
		int a,b;
		scanf("%d%d", &a,&b);
		push(a,b);
		push(b,a);
	}
	root=1;
	int answer=max(best(root,1),best(root,0));
	printf("%d", answer);
}
