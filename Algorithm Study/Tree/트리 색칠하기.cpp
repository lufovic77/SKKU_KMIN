/*nodevolor[3];
int color(int prevcolor, int nownode, int nodecount,int result){
	if(nodecount==정점의 개수)
	return 0;
	else{
		int index=0;
		for(i=1;i<=4;i++){
			if(1!=prevcolor){
				nodecolor[index]=1;
				index++;
			}
			if(2!=prevcolor){
			}
			if(3!=prevcolor){
			}
			if(4!=prevcolor){
			}
			
			for(i=0;i<index;i++)
				if(available)
				result=min(result,color(~~~))+nodecolor[i];
		}
	}
	return result;
}

int main(){
	after finding root node and the color of the root,
	
	for(i=0~i<N)
		if(available)
		color(rootcolor,nextnode,1,rootcolor)
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef struct node{
	struct node* right;
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
int dp[5][100010];
int visited[100010];
int coloring(int color, int node){
	if(dp[color][node]!=0)
	return dp[color][node];
	int i;
	visited[node]=1;
	dp[color][node]=color;
	NODE *temp;
	temp=&tree[node];
	temp=temp->right;
	while(temp!=NULL){
		if(visited[temp->element]){
			temp=temp->right;
		//	continue;
		}
		else{
		int choose=987654321;
		int now=temp->element;
			for(i=1;i<=4;i++){
				if(color!=i)
				choose=min(choose,coloring(i,now));
			}
		
		dp[color][node]+=choose;
		temp=temp->right;
		}
	}
	visited[node]=0;
	return dp[color][node];
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	int root;
	for(i=1;i<=n;i++)
	tree[i].right=NULL;
	for(i=0;i<n-1;i++){
		int a,b;
		
		scanf("%d %d", &a,&b);
		push(a,b);
		push(b,a);
		
		if(i==0)
		root=a;
		else{
			if(b==root)
			root=a;
		}
	}
//	printf("rootf:%d\n", root);
	int answer=987654321;
	for(i=1;i<=4;i++)
	answer=min(answer,coloring(i,root));
	printf("%d", answer);
}
