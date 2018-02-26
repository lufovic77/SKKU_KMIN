#include <stdio.h>
#include <stdlib.h>
struct node{
	int element;
	int parent;
	int left;
	int right;
};
struct node tree[1000010];
int main(){
	int N;
	scanf("%d", &N);
	int i;
	for(i=0;i<N;i++){
		tree[i].parent=-1;
		tree[i].left=-1;
		tree[i].right=-1;
	}
	tree[1].parent=0;
	for(i=0;i<N-1;i++){
		int a,b;
		scanf("%d%d", &a,&b);
		if(a==1){
			if(tree[a].left==-1)
			tree[a].left=b;
			else
			tree[a].right=b;
			tree[b].parent=a;
		}
		
		if(b==1){
			if(tree[b].left==-1)
			tree[b].left=a;
			else
			tree[b].right=a;
			tree[a].parent=b;
		}		
		
		if(tree[a].parent==-1 && tree[b].parent==-1){
			tree[a].left=b;
			tree[b].parent=a;
		}
		else if(tree[a].parent!=-1){
			if(tree[a].left==-1)
			tree[a].left=b;
			else
			tree[a].right=b;
			tree[b].parent=a;
		}
		else{
			if(tree[b].left==-1)
			tree[b].left=a;
			else
			tree[b].right=a;
			tree[a].parent=b;
		}
		
	}
	for(i=2;i<=N;i++){
		printf("%d", tree[i].parent);
		if(i!=N)
		printf("\n");
	}
}
