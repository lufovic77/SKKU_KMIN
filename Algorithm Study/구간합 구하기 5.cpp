#include <stdio.h>	
long long finding(int,int,int,int);
long long answer[1050][1050];
int array[1050][1050];
long long answer2[100010];
int N;
int main(){

	int M;
	scanf("%d%d", &N, &M);
	int i,j;
	for(i=1;i<=N;i++){
		for(j=1;j<=M;j++){
			scanf("%d",&array[i][j]);	
		}	
	}
	int x1,y1,x2,y2;		
	for(i=1;i<=N;i++)
	answer[i][1]=array[i][1];
	for(i=1;i<=N;i++){	
		for(j=2;j<=M;j++){
		answer[i][j]=answer[i][j-1]+array[i][j];	
		}
	}	
	
	int K;
	scanf("%d", &K);
	for(i=1;i<=K;i++){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2 );
		if(x1==x2 && y1==y2){
		answer2[i]=array[x1][y1];
		continue;
		}
		answer2[i]=finding(x1,y1,x2,y2);
	}	
	for(i=1;i<=K;i++){
	printf("%lld",answer2[i]);
	if(i!=(K))
	printf("\n");
	}
}
long long finding(int x1,int y1,int x2,int y2){
	int i;
	long long sum=0;
/*	if(x1==y1 && x2==y2){
		for(i=1;i<=N;i++)
		sum+=answer[i][N];
		return sum;
	}
*/	
	for(i=x1;i<=x2;i++){
		sum+=(answer[i][y2]-answer[i][y1-1]);
	}
	return sum;
}

