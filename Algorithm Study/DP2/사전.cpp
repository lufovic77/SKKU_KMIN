#include <stdio.h>
int N,M,K;
int count=0;
char answer[500];
void dic(int counta, int countz){
//	printf("ca:%d cz%d\n", counta,countz);
	if(counta==N && countz==M){
		count++;
		if(count==K){
			for(int i=0;i<N+M;i++)
			printf("%c", answer[i]);
	
			N=0,M=0;
		}
		return ;
	}
	if(counta>N && countz>M)
	return ;
	int index=counta+countz;
	if(counta<=N && countz<=M){
		answer[index]='a';
		dic(counta+1,countz);
		answer[index]='z';
		dic(counta,countz+1);
		return ;
	}
	if(counta<=N && countz>M){
		answer[index]='a';
		dic(counta+1,countz);
		return ;
	}
	if(counta>N && countz<=M){
		answer[index]='z';
		dic(counta,countz+1);
		return ;
	}
}
int main(){
	scanf("%d%d%d", &N,&M,&K);
	dic(0,0);
//	printf("att:%d\n", count);
	if(count<K)
	printf("-1");
}
