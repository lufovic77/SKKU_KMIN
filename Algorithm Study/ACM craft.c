#include <stdio.h>

int main(){
	int t=0,n=0,k=0;
	int i,j;
	int w;
	
	scanf("%d", &t);
	int answer[t];
	
	
	for(i=0;i<t;i++){
		
		scanf("%d%d", &n,&k);
		
		int* time=(int*)malloc(sizeof(int)*n);
		
		for(i=0;i<n;i++)
		scanf("%d", (time+i));
		
		
		int** array=(int**)malloc(sizeof(int*)*k);
		
		for(j=0;j<k;j++)
		int* (array+j)=(int*)malloc(sizeof(int)*2);
		
		for(i=0;i<k;i++)
		scanf("%d%d", &array[i][0],&array[i][1]);
		
		
		scanf("%d", &w);
		
		
		
		
		
	}
	
	
	
}
