#include<stdio.h>
#include <limits.h>
int node[1000];
int adlist[1010][1010];
int cost[1010][1010];
int num[1010];
int end=0;
int answer=INT_MAX;
void form(int a,int b,int c){
	adlist[a][num[a]]=b;
	adlist[b][num[b]]=a;
	cost[a][b]=c;
	cost[b][a]=c;
	num[a]++;
	num[b]++;
}
void search(int no,int temp){
	if(no==end){
		if(answer>=temp){
			answer=temp;
		}
	}
	node[no]=1;
	int i;
	for(i=0;i<num[no];i++){
		if(node[adlist[no][i]]==0){
		printf("cost:%d\n", cost[no][adlist[no][i]]);
		
		search(adlist[no][i],temp+cost[no][adlist[no][i]]);
		}
	}	
	node[no]=0;	
}
int main(){
	int N,M,i;
	
	scanf("%d%d", &N,&M);
	for(i=0;i<M;i++){
		int a,b,c;
		scanf("%d%d%d", &a,&b,&c);
		if(a>=end)
		end=a;
		if(b>=end)
		end=b;
		form(a,b,c);
	}
	search(1,0);
	printf("%d", answer);
}
