/*
① k번 비트가 1인지 0인지 확인하고 싶다. :status & (1<<k) 값이 0이면 k번째 비트는 0, else 1 
② k번 비트를 1로 만들고 싶다. :status = status | (1<<k) 그냥 or연산만 해주면 됨  
③ k번 비트를 0으로 만들고 싶다. : status = status & ~(1<<k) 걍 not해주고 and 해주면 끝. 

*/
#include <stdio.h>
#include <math.h>
#include <cstdio>
#include <algorithm>
using namespace std;
int N;
int result=0;
int w[20][20];

int  tsp(int num, int visited){
	int temp=result;
	if(visited==pow(2,N)-1){
		return result;
	}
	else{
		int check=0;
		int i,j;
		int temp=visited;
		int temp2=result;
		for(i=0;i<N;i++){
			if((visited & (1<<i))==0){
				if(w[num][i]!=0){
				printf("?");
				result=min(result,tsp(i,visited | (1<<i)))+w[num][i];
				}
			}
		}
	}
	return result;
}
int main(){
	scanf("%d", &N);
	 
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		scanf("%d", &w[i][j]);
	
	int visited=1;
	int answer=tsp(0,visited);
	
	printf("%d", answer);
}
