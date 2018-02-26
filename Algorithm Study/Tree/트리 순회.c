#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	char element;
	struct node* left;
	struct node* right;
}NODE;
NODE parent;
NODE* leftnode;
NODE* rightnode;
struct node array[50];
int main(){
	int N;
	printf("%x", &array[0]);
	printf("??");
	scanf("%d\n", &N);
	int i,j=0,k;
	char a,b,c;
	for(i=0;i<N;i++){
		scanf("%c\n%c\n%c",&a,&b,&c);
		array[j].element=a;
		if(b!='.'){
			leftnode=(NODE*)malloc(sizeof(NODE));
			array[j].left=leftnode;
			leftnode->element=b;
		}
		if(c!='.'){
			rightnode=(NODE*)malloc(sizeof(NODE));
			array[j].right=rightnode;
			rightnode->element=c;
		}
		printf("??_??\n");
		if(i!=0){
			for(k=0;k<i;k++){
				if(array[i].element==array[k].left->element){
					array[k].left=&array[i];
					break;
				}
				if(array[i].element==array[k].right->element){
					array[k].right=&array[i];
					break;
				}
			}
		}
	}
	printf("tree : %c ",array[j].left->element );
	return 0;
}
