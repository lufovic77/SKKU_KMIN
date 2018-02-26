#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	struct node* left;
	struct node* right;
	int element;	
}NODE;

int main(){
	int N,M;
	scanf("%d%d",&N,&M);
	int i;
	NODE *head;
	NODE *temp=(NODE*)malloc(sizeof(NODE));
	NODE *temp1,*temp2;
	for(i=1;i<=N;i++) {
		if(i==1){
			NODE *temp=(NODE*)malloc(sizeof(NODE));		
			temp->element=1;
			head=temp;
			temp1=head;
		}
		else{	
			NODE *temp=(NODE*)malloc(sizeof(NODE));
			temp->element=i;
			temp1->right=temp;
			temp->left=temp1;
			temp1=temp;
		}
	}
	temp1->right=head;
	head->left=temp1;
	
	int count=0;
	temp=head;
	for(i=0;i<M-1;i++)
	temp=temp->right;
	
	printf("<");
	while(count!=N){
		if(count==N-1){
			printf("%d", temp->element);
			break;
		}
		printf("%d, ", temp->element);
		temp->left->right=temp->right;
		temp->right->left=temp->left;
		
		for(i=0;i<M;i++){
			temp=temp->right;
		}
			
		count++;
		
	}
	printf(">");
	
}
