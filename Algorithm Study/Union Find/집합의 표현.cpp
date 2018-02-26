#include <stdio.h>
int parent[1000100];

int find(int n){
	if(parent[n]==-1)
	return n;
	parent[n]=find(parent[n]); 
	return find(parent[n]);
}

void merge(int a, int b){
	a=find(a);
	b=find(b);
	if(a==b)
	return ;
	parent[b]=a;
}
int main(){
	int i;
	for(i=0;i<1000100;i++)
	parent[i]=-1;
	
	int a,b;
	int relation;
	int n,m;
	scanf("%d%d", &n,&m);
	for(i=0;i<m;i++){
		scanf("%d%d%d", &relation,&a,&b);
		if(relation==0){
			merge(a,b);
		}
		else{
			a=find(a);
			b=find(b);
			if(a==b)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
		
}
