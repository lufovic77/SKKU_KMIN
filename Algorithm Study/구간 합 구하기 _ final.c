#include <stdio.h>
long long answer[1050][1050];
int array[1050][1050];
long long answer2[100001];
int main(){
	int N,M;
	scanf("%d%d", &N, &M);
	int i,j;
	int x1,x2,y1,y2;
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			scanf("%d",&array[i][j]);	
		}	
	}
	
	answer[1][1]=array[1][1];
	//////////////////////////////
	for(i=2;i<=N;i++)
		answer[1][i]=array[1][i]+answer[1][i-1];
	for(j=2;j<=N;j++)
		answer[j][1]=array[j][1]+answer[j-1][1];
	for(i=2;i<=N;i++){
		for(j=2;j<=N;j++){
			answer[i][j]=array[i][j]+answer[i-1][j]+answer[i][j-1]-answer[i-1][j-1];
		}
	}
	int p;
	for(p=1;p<=M;p++){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2 );	
		//answer2[i]=finding(x1,y1,x2,y2);
		}
printf("---------------------\n");
	
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			printf("%d ?? ", answer[i][j]);
		}
}
	return 0;
	//////////////////////////////
/*	
}

long long finding

*/
}
