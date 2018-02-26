#include <stdio.h>
#include <memory.h>
int node[100][200];
int degree[100];
int del_node;
int find_leaf(int root){
	int i;
	if(degree[root]==0)
	return 1;
	int count=0;
	for(i=0;i<degree[root];i++){
		if(node[root][i]==del_node)
		continue;
		count+=find_leaf(node[root][i]);
	}
	return count;
}

int main(){
	int N;
	scanf("%d", &N);
	int i,j;
	int par;
	int root;	
	
	memset(node,0,sizeof(node));
	memset(degree,0,sizeof(degree));
	
	for(i=0;i<N;i++){
		scanf("%d", &par);
		if(par==-1){
			root=i;
			continue;
		}
		node[par][degree[par]]=i;
		degree[par]++;	
	}
	int count=0; 

	scanf("%d", &del_node);
	
	int k;
	for(i=0;i<N;i++){
		for(j=0;j<degree[i];j++){
			if(node[i][j]==del_node){
				
				for(k=j;k<degree[i];k++){
					node[i][k]=node[i][k+1];
				}
					
		
			degree[i]--;	
			break;
			}
		}
	}
	
	//4 -1 0 1 2 2
	
	degree[del_node]=0;
	count=find_leaf(root);
	if(del_node==root)
	printf("0");
	else
	printf("%d",count);
	
	
}
