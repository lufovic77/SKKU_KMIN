#include <stdio.h>
#include <stdlib.h>

typedef struct dfs{
	int element;
	struct dfs* next ;                           //������ �𸣰ٴµ�.. ����ü ������ ��� �����ϴ��� �� �����...
	
}DFS;

void stack(int, int);

DFS * head=NULL;

int main(){
	int array[5][5];
	
	int i,j;
	printf("Type the adjacent matrix\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d", &array[i][j]);
		}
			
	}

	
	int vertex=0, finding=0;

	printf("\nType the finding vertex");
	scanf("%d", &finding);
		
	printf("\nType the vertex");
	
//	while(IsEmpty=)
	
	scanf("%d", &vertex);
	
	stack(vertex, finding);
	
	
	
	
	
}


void stack(int vertex, int finding){
	
	DFS* node=(DFS*)malloc(sizeof(DFS));
	
	node->element=finding;
	
	node->next=NULL;
	
		
	
	if(head!=NULL)                                  //Then, they are linked using the 'head'. It is why the 'head' node is important. 
	node->next=head;
	
	head=node; 
	
	
}
