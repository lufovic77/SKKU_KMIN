#include <stdio.h>
struct node{
	int element;
	int leftweight;
	int rightweight;
	int left;
	int right;
};
struct node tree[10001];
void preorder(int node){
	if(node==-1)
	return ;
	printf("%d", tree[node].element);
	preorder(tree[node].left);
	preorder(tree[node].right);
}
int temp;
int main(){
	int n;
	scanf("%d", &n);
	int i;
	int a,b,c;
	temp=1;
	for(i=1;i<n;i++){
		scanf("%d%d%d", &a,&b,&c);
		tree[a].element=a;
		tree[a].left=-1;
		tree[a].right=-1;
		if(a==temp && i!=1){
			tree[a].right=b;
			tree[a].rightweight=c;
		//	tree[tree[a].right].element=b;
		}
		else{
			tree[a].left=b;
			tree[a].leftweight=b;
		}
		temp=a;
	}
	preorder(1);
}
