#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	char element;
	struct node* left;
	struct node* right;
}NODE;
NODE* root;
NODE* parent;
NODE* leftlink;
NODE* rightlink;
int main(){
	NODE* array[130];
	int N;
	scanf("%d", &N);
	int i,j=0,k=0;
	char a,b,c;
	for(i=0;i<N;i++){
		scanf("%c%c%c", &a,&b,&c);
		parent=(NODE*)malloc(sizeof(NODE));
		if(i!=0){
			for(k=0 ;k<i;k++){
				if(array[k]->left->element==a){
					array[k]->left=parent;
				}
				if(array[k]->right->element==a){
					array[k]->right=parent;
				}
			}
		}
		array[j]=parent;
		parent->element=a;
		if(b!='.'){
			parent->left->element=b;
		}
		if(c!='.'){
			parent->right->element=c;
		}
		j++;
	}
	NODE* root=array[0];
//	printf("\n\n%x",root );
}
