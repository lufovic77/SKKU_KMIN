#include <stdio.h>
#include <memory.h>
int cabbage[60][60];
int visited[60][60];
int adjacentx[5];
int adjacenty[5];
int width,height,num;
void dfs(int row, int col){
		int x[4] = { 0,  0, -1, 1 };
		int y[4] = { 1, -1,  0, 0 };
		
//		System.out.println("row = [" + row + "], col = [" + col + "]");
		
		cabbage[row][col] = 0;
		
		for (int i = 0; i < 4; i++) {
			int r = row + x[i];
			int c = col + y[i];
			
			if( r > -1 && r < height && c > -1 && c < width){
//				System.out.println("next_row = [" + r + "], next_col = [" + c + "]");
				if(cabbage[r][c] == 1){
					dfs(r,c);
				}	
			}
		}		
	}


int main(){
	int testcase;
	scanf("%d", &testcase);
	int i;
	int m,n;
	int h,j;
	int count=0;
	while(testcase--){
		count=0;
		scanf("%d%d%d", &width,&height,&num);
		for(i=0;i<num;i++){
			int a,b;
			scanf("%d%d", &a,&b);
			cabbage[b][a]=1;
		}
		for(m=0;m<height;m++){
			for(n=0;n<width;n++){
				if(cabbage[m][n]==1){
					dfs(m,n);
					count++;
				}
				
			}
		}
		
		printf("%d\n", count);
	}
}
