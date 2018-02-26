#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char string[100010];
typedef struct node{
	struct node *right;
	struct node *left;
	char element;
}NODE;
int main(){
	scanf("%s", string);
	int size=strlen(string);
	int i;
	NODE *head, *tail;
	NODE *temp;
	NODE *temp1;
	for(i=0;i<size;i++){
		if(i==0){
			temp=(NODE*)malloc(sizeof(NODE));
			head=temp;
			temp1=temp;
			temp->element=string[i];
		}
		else{
			temp=(NODE*)malloc(sizeof(NODE));
			temp->left=temp1;
			temp->element=string[i];
			temp1->right=temp;
			temp1=temp;
		}		
	}
	head->left=NULL;
	temp->right=NULL;
	tail=temp;
	
	temp=(NODE*)malloc(sizeof(NODE));
	tail->right=temp;
	temp->right=NULL;
	temp->left=tail;
	tail=temp;
	
	NODE *pointer;
	int N;
	
	pointer=tail;
	scanf("%d", &N);
	char order, order2;
	getchar();
	for(i=0;i<N;i++){
		scanf("%c", &order);
		if(order=='L'){
			if(pointer!=head)
			pointer=pointer->left;
		}
		else if (order=='D'){
			if(pointer!=tail)
			pointer=pointer->right;
		}
		else if (order=='B'){
			if(pointer!=head){
				if(pointer==head->right){
					head=pointer;
					pointer->left=NULL;
				}
				else{
					pointer->left->left->right=pointer;
					pointer->left=pointer->left->left;
				}
			}
		}
		
		else{
			getchar();
			scanf("%c", &order2);
			temp=(NODE*)malloc(sizeof(NODE));
			if(pointer==head){
				temp->right=head;
				head->left=temp;
				head=temp;
				temp->element=order2;	
			}
			else{
				pointer->left->right=temp;
				temp->left=pointer->left;
				pointer->left=temp;
				temp->right=pointer;
				temp->element=order2;
			}			
		}
		
		getchar();
	}
	temp=head;
	while(temp->right!=NULL){
		printf("%c", temp->element);
		temp=temp->right;
	}		
		
}
