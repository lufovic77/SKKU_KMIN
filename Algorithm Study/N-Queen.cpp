#include <stdio.h>
#include <math.h>
int N;
int col[20];
int count=0;
int promising(int row){
	int i;
	for(i=1;i<row;i++){
		if(col[row]==col[i])
		return 0;
	}
	for(i=1;i<row;i++){
		if(abs(i-row)==abs(col[i]-col[row]))
		return 0;
	}
	return 1;
	
}
void queen(int row){
	if(promising(row)){
		if(row==N)
		count++;
		else{
			int i;
			for(i=1;i<=N;i++){
				col[row+1]=i;
				queen(row+1);
			//	col[row]=0;
			}
		}		
	}  
	else
	return ;
}
int main(){
	scanf("%d", &N);
	queen(0);
	printf("%d", count);
}
