#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	struct node* left;
	struct node* right;
	int element;	
	int number;
}NODE;
int num[1050];

int main(){
	int N;
	scanf("%d",&N);
	int i;
	NODE *head;
	NODE *temp=(NODE*)malloc(sizeof(NODE));
	NODE *temp1,*temp2;
	for(i=0;i<N;i++)
	scanf("%d", num+i);
	for(i=1;i<=N;i++) {
		if(i==1){
			NODE *temp=(NODE*)malloc(sizeof(NODE));		
			temp->element=1;
			temp->number=num[0];
			head=temp;
			temp1=head;
		}
		else{	
			NODE *temp=(NODE*)malloc(sizeof(NODE));
			temp->element=i;
			temp->number=num[i-1];
			temp1->right=temp;
			temp->left=temp1;
			temp1=temp;
		}
	}
	temp1->right=head;
	head->left=temp1;
	
	
	int count=0;
	temp=head;
	int j;
	int move;
	for(j=0;j<N;j++){
		printf("%d ", temp->element);
		move=temp->number;
		if(move>0){
			temp->left->right=temp->right;
			temp->right->left=temp->left;
			for(i=0;i<move;i++)
			temp=temp->right;
		}
		else{
			temp->left->right=temp->right;
			temp->right->left=temp->left;
			for(i=0;i<(-move);i++)
			temp=temp->left;
		}
	}
	
}
