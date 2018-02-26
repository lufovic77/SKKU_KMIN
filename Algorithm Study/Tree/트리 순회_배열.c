#include <stdio.h>
typedef struct node{
	char element;
	int left;
	int right;
}NODE;
struct node tree[50];
void preorder(int node){
	if(node==-1)	return ;
	printf("%c", tree[node].element);
	preorder(tree[node].left);
	preorder(tree[node].right);
}
void inorder(int node){
	if(node==-1)	return ;
	inorder(tree[node].left);
	printf("%c", tree[node].element);
	inorder(tree[node].right);
}
void postorder(int node){
	if(node==-1)	return ;
	postorder(tree[node].left);
	postorder(tree[node].right);
	printf("%c", tree[node].element);
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	char x,y,z;
	for(i=1;i<=n;i++){
		getchar();
		x=getchar();
		y=getchar();
		if(y=' ')
		y=getchar();
		z=getchar();
		if(z=' ')
		z=getchar();
		
		tree[x-'A'+1].element=x;
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
	printf("\n");
	inorder(1);
	printf("\n");
	postorder(1);
//	inorder(node);
//	postorder(node);

}
