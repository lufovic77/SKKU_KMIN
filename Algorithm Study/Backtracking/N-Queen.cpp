#include <stdio.h>
#include <memory.h>
int count=0;
int N;
int map[20][20];
int queensafe(int row, int col){
	int min;
	if(row>=col)
	min=col;
	else
	min=row;
	int i,j;
	for(i=1;i<=N;i++){
		if(map[i][col]==1)
		return 0;
	}
	
	int reset=min-1 ;
	for(i=row-reset,j=col-reset;j<=N&&i<=N;i++,j++){
	
		if(map[i][j]==1)
		return 0;
	}
	
	
	if(min==col){
		j=1;
		for(i=1;i<=N;i++){
			if(map[i][j]==1)
			return 0;
			j++;
		}
		j=col;
	}
	if(min==row){
		j=col-row+1;
		for(i=1;i<row;i++){
			if(map[i][j]==1)
			return 0;
			j++;
		}
	}

	
	return 1;
}
void queen(int row){
	int check=0;
	int i,j;
	int m,n;
		for(i=1;i<=N;i++){
			
			if(row==3 && i==1){
				printf("/////////////%d %d/////////", map[2][2],queensafe(row,i));
			}
			
			
				printf("row:%d col%d\n", row,i);
			if(queensafe(row,i)){
				check++;
				map[row][i]=1;
				if(row==N){
					count++;
				printf("\n------------\n");
				
				for(m=1;m<=N;m++)
					for(n=1;n<=N;n++){
						printf("%d ", map[m][n]);
						if(n==N)
						printf("\n");
					}			
				printf("\n------------\n");
					map[row][i]=0;
					
				}
				else{
					queen(row+1);
					map[row][i]=0;
				}
			}
			/*
				printf("?");
				for(j=1;j<=N;j++)
				memset(map[j],0,80);
			*/	
			
			
		}
		
}
int main(){
	scanf("%d", &N);
	int i,j;
	
		queen(1);
	
	printf("%d", count);
}
