#include <stdio.h>
struct node{
	int parent;
	
};
int index=1;
int numofnode;
int preorder[1010];
int inorder[1010];
int tree[1010];
void BT(int first,int last,int rootnode){
	if(first>last)
	return ;
	int i;
	int find;
	for(i=first;i<=last){
		if(inorder[i]==rootnode){
			find=i;
			break;
		}
	}
	index++;
	BT(1,find-1,preorder[index]);
	BT(find+1,numofnode,preorder[index]);
	
	
}
int main(){
	int T;
	scanf("%d", &T);
	int i,m,n;
	for(i=0;i<T;i++){
		scanf("%d",&numofnode);
		for(m=1;m<=numofnode;m++)
		scanf("%d", preorder+m);
		for(m=1;m<=numofnode;m++)
		scanf("%d", inorder+m);
		BT(1,numofnode,preorder[1]);
	}
}
