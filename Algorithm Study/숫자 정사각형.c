#include <stdio.h>

int main(){
	
	int n,m;
	int array[51][51];
	
	scanf("%d%d", &n,&m);
	
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &array[i][j]);
			
		for(i=0;i<n;i++)
		for(j=0;j<m;j++){
		printf("%d", array[i][j]);
		if(j==m-1)
		printf("\n");
		}
		
}
