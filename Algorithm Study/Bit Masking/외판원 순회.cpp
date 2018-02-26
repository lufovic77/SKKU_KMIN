/*
�� k�� ��Ʈ�� 1���� 0���� Ȯ���ϰ� �ʹ�. :status & (1<<k) ���� 0�̸� k��° ��Ʈ�� 0, else 1 
�� k�� ��Ʈ�� 1�� ����� �ʹ�. :status = status | (1<<k) �׳� or���길 ���ָ� ��  
�� k�� ��Ʈ�� 0���� ����� �ʹ�. : status = status & ~(1<<k) �� not���ְ� and ���ָ� ��. 

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
