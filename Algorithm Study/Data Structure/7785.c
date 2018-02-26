#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char name[100];
	struct node* left;
	struct node* right;
	int present;
}NODE;
NODE* newNode(char* name){
	NODE* root=(NODE*)malloc(sizeof(NODE));
	int i;
	for(i=0;i<strlen(name);i++)
		root->name[i]=name[i];
	root->name[i]='\0';
	root->present=1;
	root->left=root->right=NULL;
	return root; 
}
void inorder(NODE* node){
	if(node!=NULL){
		int i;
		inorder(node->right);
		if(node->present==1){
		puts(node->name);
	}
		
		inorder(node->left);
	}
	return ;
}

int leftSmall(char* L, char* R){
	int Llength=strlen(L);
	int Rlength=strlen(R);
	int i;
	if(Llength>Rlength){
			for(i=0;i<Rlength;i++){
						if(L[i] > R[i]){
										return 0;
									}
						else if(L[i] <R[i]){
										return 1;
									}
						else
								continue;
					}
			return 1;
		}

	else if(Llength<Rlength){
			for(i=0;i<Llength;i++){
						if(L[i] > R[i]){
										return 0;
									}
						else if(L[i] <R[i]){
										return 1;
									}
						else
								continue;
					}
			return 0;
	
		}
	else{	//same length
								
			for(i=0;i<Llength;i++){
						if(L[i] > R[i]){
										return 0;
									}
						else if(L[i] <R[i]){
										return 1;
									}
						else
								continue;
					}
	return -1;
		}

}

NODE* insert(NODE* root, char* name){
	if(root==NULL){
		return newNode(name);
	}
	int result=leftSmall(root->name,name); //left is original right is new
	if(result==1){//put to the right
		root->right=insert(root->right,name);
	}
	else if(result==0){//put to left
		root->left=insert(root->left,name);
	}
	else{ //if same mark present as 0
		root->present=0;
	}
	return root;
}

int main(){
	int N;
	scanf("%d", &N);
	int i=0,j=0,k=0;
	char letter[2];
	NODE* temp;
	NODE* root=NULL;
	char name[100];
	char trash[10];
			scanf("%c", letter);
	for(i=0;i<N;i++){
		j=0;
		k=0;
		while(1){
			scanf("%c", letter);
			if(letter[0]==' '){
				name[j]='\0';
				break;
			}
			name[j]=letter[0];
			j++;
		}
		while(1){
			scanf("%c", letter);
			if(letter[0]=='\n')
			break;
			trash[k]=letter[0];
			k++;
		}
		if(i==0){
			root=insert(root,name);
		}
		else
		insert(root,name);
	}
	inorder(root);
}
