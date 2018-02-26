#include <stdio.h>
struct node{
	int element;
	int left;
	int right;
};
struct node tree[300010];
int COUNTER;
void insert(int numX,int nodeN){
	COUNTER++;
	if(numX<tree[nodeN].element){
		if(tree[nodeN].left==-1){
			tree[nodeN].left=numX;
		}
		else
			insert(numX,tree[nodeN].left);
	}
	else{
		if(tree[nodeN].right==-1){
			tree[nodeN].right=numX;
		}
		else
			insert(numX,tree[nodeN].right);
	}
		
}
int main(){
	int N;
	COUNTER=0;
	scanf("%d", &N);
	int i;
	for(i=1;i<=N;i++){
		tree[i].element=i;
		tree[i].left=-1;
		tree[i].right=-1;
	} 
	int number;
	int root;
	scanf("%d", &root);
	i-=	2;
	printf("i:%d\n",i);
	printf("\n?0?\n");
	while(i--){
		scanf("%d",&number);
		insert(number,root);
		printf("\n?%d?\n", COUNTER);
	}
}
