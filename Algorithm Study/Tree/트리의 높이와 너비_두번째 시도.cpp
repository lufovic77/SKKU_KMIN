#include <stdio.h>
int count=0;
struct node{
	int left;
	int right;
	int element;
}; 
struct node tree[10010];
void subtree(int root){//counting number of nodes
	if(root==-1)
	return ;
	subtree(tree[root].left);
	count++;
	subtree(tree[root].right);
}
void inorder(int root){
	if(root==-1)
	return ;
	count=0;
	subtree(tree[root].left);
	int c1=count;
	tree[root].element+=(c1+1);
	inorder(tree[root].left);
	inorder(tree[root].right);
}
void zxc(int root, int rootcol){
	if(root==-1)
	return ;
	
	zxc(tree[root].left,rootcol);
	tree[root].element+=rootcol;
	zxc(tree[root].right,rootcol);
}
void sdf(int root){
	if(root==-1 )
	return ;
	int rootcol=tree[root].element;
	if(tree[root].right!=-1)
	tree[tree[root].right].element+=rootcol;
	int rightnode;
	if(tree[root].right!=-1){
		rightnode=tree[root].right;
		if(tree[rightnode].left!=-1)
		zxc(tree[rightnode].left,rootcol);
	}
	sdf(tree[root].left);
	sdf(tree[root].right);
}
int main(){
	int N;
	scanf("%d", &N);
	int i;
	int root;
	for(i=0;i<N;i++){
		int a,b,c;
		scanf("%d%d%d", &a,&b,&c);
		if(i==0){
			root=a;
		}
		else
		if(b==root || c== root)
		root=a;
		tree[a].left=b;
		tree[a].right=c;
		tree[a].element=0;	
	}
	inorder(root);
	
	for(i=1;i<=N;i++)
	printf("%2d ", i);
	printf("\n");
	for(i=1;i<=N;i++)
	printf("%2d ", tree[i].element);
	printf("\n");
	
	sdf(root);
	for(i=1;i<=N;i++)
	printf("%2d ", i);
	printf("\n");
	for(i=1;i<=N;i++)
	printf("%2d ", tree[i].element);
	printf("\n");
	
}
	
