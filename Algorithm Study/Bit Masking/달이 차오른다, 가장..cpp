#include <stdio.h>
char map[55][55];
int visited[55][55];
int queue[3][100000];
int keys=0;
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
int keycount[6]={100000,100000,100000,100000,100000,100000};
int main(){
	int N,M;
	scanf("%d%d", &N,&M);
	int i,j;
	int startrow,startcol;
	int front=0, rear=0;
	for(i=0;i<N;i++)
		for(j=0;j<M;j++){
			scanf("%c", &map[i][j]);
			if(map[i][j]=='0')
			startrow=i;	startcol=j;
			
		}
	int count=0;
	queue[0][0]=startrow;
	queue[1][0]=startcol;
	queue[2][0]=count;
	while(front<=rear){
		int nowrow=queue[0][front];
		int nowcol=queue[1][front];
		count=queue[2][front];
		
		if(map[nowrow][nowcol]==1){
			printf("%d", count);
			return 0;
		}
		
		front++;
		visited[nowrow][nowcol]=1;
		
		for(i=0;i<4;i++){
			int r=nowrow+x[i];
			int c=nowcol+y[i];
			if(r>=0 && c>=0 && r<N && c<M && map[r][c]!='#' && visited[r][c]==0){
				if(visited[r][c]=='.' || visited[r][c]=='0'){
					rear++;
					queue[0][rear]=r;
					queue[1][rear]=c;
					queue[2][rear]=count+1;
				}
				if( 97<=visited[r][c] && visited[r][c]<=102){
					int n=visited[r][c]-'a';
					if(count+1<=keycount[i])
					keycount[i]=count+1;
					
					key=(key | (1<<n));
					
					rear++;
					queue[0][rear]=r;
					queue[1][rear]=c;
					queue[2][rear]=count+1;
				}
				
				if( 65<=visited[r][c] && visited[r][c]<=70){
					int n=visited[r][c]-'A';
					
					if(key & (1<<n)!=0){
						rear++;
						queue[0][rear]=r;
						queue[1][rear]=c;
						queue[2][rear]=count+keycount[n];
						
					}
					else{
						rear++;
						
					}
					
				}
				
				
			}
		}
		
	}		
}
