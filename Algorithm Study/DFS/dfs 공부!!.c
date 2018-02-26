#include <stdio.h>	
int array[6][6];
int stack[100];
int nowindex=0;
int count=0; 
//int checkvertex=0;
int p=0,q=0;
int checkvertex[100];
void push(int);
int path[100];
int main(){
	array[1][2]=1;
	array[1][4]=1;
	array[1][5]=1;
	array[5][3]=1;
//	array[3][4]=1;
//	array[4][5]=1;
	
	int i,j;
	int startvertex, findvertex,nowvertex=0;
	scanf("%d%d", &startvertex, &findvertex);
	stack[nowindex]=startvertex;
	nowindex++;
	path[q]=startvertex; //경로 찾기 ㅎㅎ
	q++;
	nowvertex=startvertex;
	while(nowvertex!=findvertex){
		count=0;
		for(i=1;i<=5;i++){
			if(array[nowvertex][i]==1){// matrix 검사 
				array[nowvertex][i]=0;
				push(i);
					// 방문한 vetex 0으로 바꿔놓기
				count ++;
				printf("1?? \n"); 
				 
				if(count>=1){				// 갈수 있는 곳에 두 군데 이상인 경우 
					checkvertex[p]=i;
					printf("2?? \n"); 
					p++;
				}
			}
			
		}
		p--;
		nowvertex=checkvertex[p];
		path[q]=nowvertex;
		printf("now : %d \n", nowvertex);
		if(nowvertex==findvertex){
			stack[nowindex]=findvertex;
			q++;
			path[q]=nowvertex;
			break;
		}
		if(count==0){	
			p--;			// 더 이상 못가면 다시 되돌아가기 
			nowvertex=checkvertex[p];	
			printf("3?? \n"); 
		}
		nowindex--;
		stack[nowindex]=0;
		printf("4?? \n"); 
	}
	for(i=0;i<=q;i++)
	printf("%d ", path[i]);
}

void push(int vertex){
	stack[nowindex]=vertex;
	nowindex++;
	
}
