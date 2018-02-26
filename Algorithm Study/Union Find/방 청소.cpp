#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int element;
	struct node* right;
}NODE;
NODE liquor[300010];
int parent[300010];
int find(int node){
	if(parent[node]==0)
	return node;
	parent[node]=find(node);
	return parent[node];
}
void merge(int a, int b){
	a=find(a);
	b=find(b);
	if(a==b)
	return ;
	parent[a]=b;
}
void push(int a, int b){
	NODE* temp1;
	NODE* temp2; 
	temp1=&liquor[a];
	while(temp1->right!=NULL)
	temp1=temp1->right;
	temp2=(NODE*)malloc(sizeof(NODE));
	temp2->element=b;
	temp2->right=NULL;
	temp1->right=temp2;
}
int main(){
	int N,L;
	scanf("%d%d", &N,&L);
	int i;
	for(i=1;i<=N;i++)
	liquor[i].right=NULL;
	for(i=1;i<=N;i++){
		int a,b;
		scanf("%d%d", &a,&b);
		push(i,a);
		push(i,b);
	}
	
	for(i=1;i<=N;i++){
		int a=liquor[i].right->element;
		int b=liquor[i].right->right->element;
		
		if(find(a)==a){
			merge(a,b);
			printf("LADICA\n");
			continue;
		}
		if(find(b)==b){
			merge(b,a);
			printf("LADICA\n");
			continue;
		}
		if()
		
	}
	
	
}
