#include <stdio.h>
char map[30][30];
int visited[30][30];
int used[30];
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
int R,C;
int result;
void letters(int row, int col, int dist){
	if(dist>=result)
	result=dist;
	used[map[row][col]-'A']=1;
	visited[row][col]=1;
	int i;
	for(i=0;i<4;i++){
		int r=row+x[i];
		int c=col+y[i];
		if(c>=0&&r>=0&&r<R&&c<C&&!visited[r][c]&&!used[map[r][c]-'A'])
		letters(r,c,dist+1);
		else
		continue;
	}
	used[map[row][col]-'A']=0;
	visited[row][col]=0;
}

int main(){
	scanf("%d%d", &R,&C);
	int i,j;
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)
		scanf(" %c", &map[i][j]);
	}
		
	letters(0,0,1);
	printf("%d", result);
}
