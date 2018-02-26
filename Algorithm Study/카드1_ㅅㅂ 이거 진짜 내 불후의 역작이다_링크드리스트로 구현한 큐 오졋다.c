#include <stdio.h>
#include <stdlib.h>
void push(int);
void pop();
void change();
int q=0;
typedef struct queue{	
	struct queue* next;
	struct queue* prev;
	int element;
}QUEUE;

QUEUE* first=NULL;
QUEUE* head=NULL;

int main(){
	int N;
	scanf("%d", &N);
	
	if(N==1){
	printf("1");
	return 0;
	}
	int i;
	for(i=N;i>=1;i--)
	push(i);
	
	while((head)!=NULL){
	pop();
	
	if(head->next==NULL)
	break;
	change();
	}
	printf("%d", head->element);
}

void push(int p){
	QUEUE* node=(QUEUE*)malloc(sizeof(QUEUE));
	if(q==0)
	first=node;
	q=1;
	
	node->element=p;
	node->next=NULL;
	
	if(head!=NULL)
	node->next=head;
	
	head=node;
	
	return ;
}

void pop(){
	QUEUE* temp;
	temp=head->next;
	
	printf("%d ", head->element);
	
	head->next=NULL;
	head=temp;
}
void change(){
	
	QUEUE* temp;
	temp=head->next;
	
	head->next=NULL;
	
	first->next=head;
	first=head;
	
	head=temp;
	
}

