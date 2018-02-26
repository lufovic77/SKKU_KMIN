#include <stdio.h>
typedef struct node{
	int left;
	int right;
	int element;
	int leftsubtree;
}NODE;
struct node tree[10010];
int count=0;
int level=1;
int templevel=1, tempelement;
int queue[2][1000000];
int front=0,rear=0;
int index=0;
int node[2][100000];
int max[2];
void inorder(int root){
	if(root==-1)
	return ;
	inorder(tree[root].left);
	if(tree[root].right!=-1)
	tree[tree[root].right].element+=tree[root].element;
	inorder(tree[root].right);
}
void subtree(int root){
	if(root==-1)
	return ;
	subtree(tree[root].left);
	count++;
	subtree(tree[root].right);
}
void col(int root){
	if(root==-1)
	return ;
	count=0;
	subtree(tree[root].left);
	int c1=count;
	tree[root].element=(c1+1);
	col(tree[root].left);
	col(tree[root].right);
	return ;
}
void levelorder(int root){
	if(front>rear)
	return ;
	
	
	if(tree[root].left!=-1){
		rear++;
		queue[0][rear]=tree[root].left;
		queue[1][rear]=level+1;
	}
	if(tree[root].right!=-1){
		rear++;
		queue[0][rear]=tree[root].right;
		queue[1][rear]=level+1;
	}
	front++;
	int now=queue[0][front];
	level=queue[1][front];
	
	node[0][index]=now;
	node[1][index]=level;
	index++;
	
	levelorder(now);
	return ;	
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
				
	}
	
	queue[0][0]=root;
	queue[1][0]=0;
	col(root);
	
	tempelement=tree[root].element;
	
	levelorder(root);
	int rootcol=tree[root].element;
	inorder(root);
	
	for(i=0;i<index;i++)
	printf("%2d ",node[0][i]);
	printf("\n");
	for(i=0;i<index;i++)
	printf("%2d ",tree[node[0][i]].element);
	printf("\n");
	for(i=0;i<index;i++)
	printf("%2d ",node[1][i]);
	printf("\n");
	
	max[0]=0;
	int temp1=2,tempindex=0;
	for(i=1;i<index-1;i++){
		if(node[1][i]!=temp1){
			if(max[0]<(tree[node[0][i-1]].element-tree[node[1][tempindex]].element)){
				max[0]=(tree[node[0][i-1]].element-tree[node[1][tempindex]].element);
				max[1]=temp1;
				printf("?/");
			}
			temp1=node[1][i];
			tempindex=i;
		}
		temp1=node[1][i];
	}
	
	printf("\n\n%d %d", max[0],max[1]);
//	printf("%d", tree[tree[root].right].element);
	
}
