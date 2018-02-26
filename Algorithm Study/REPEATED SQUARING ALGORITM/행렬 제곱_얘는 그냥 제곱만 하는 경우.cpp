#include <stdio.h>
int main(){
	int N,B;
	int matrix[6][6];
	int answer[6][6];
	scanf("%d%d", &N,&B);
	int m,n;
		int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d", &matrix[i][j]);

	int temp=0;
	int array[100];
	int index=0;
	for(m=0;m<N;m++){
		for(i=0;i<N;i++){
			temp=0; 
			for(j=0;j<N;j++){
				temp+=matrix[m][j]*matrix[j][i]%1000;
			}
			array[index]=temp;
			index++;
		}
	}
	for(i=0;i<N*N;i++){
		
	}
}	
