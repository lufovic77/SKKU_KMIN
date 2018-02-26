#include <stdio.h>
#undef max
typedef struct node{
	char element;
	int left;
	int right;
}tree[50];
void preorder(int node){
	if(node==-1)	
	return ;
	printf("%c", tree[node]->element);
	preorder(tree[node].left);
	preorder(tree[node].right);	
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	char x,y,z;
	for(i=1;i<=n;i++){
		scanf("%c%c%c", &x,&y,&z);
		tree[x-'A'+1].element='x';
		if(y!='.')
		tree[x-'A'+1].left=y-'A'+1;
		else
		tree[x-'A'+1].left=-1;
		if(z!='.')
		tree[x-'A'+1].right=z-'A'+1;
		else
		tree[x-'A'+1].right=-1;
	}
	preorder(1);
//	inorder(node);
//	postorder(node);
	
}
