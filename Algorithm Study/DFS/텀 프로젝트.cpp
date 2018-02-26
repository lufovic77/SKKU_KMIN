#include <stdio.h>
#include <stdlib.h>
typedef struct student{
	struct student *right;
	int element;
}STUDENT;
int visited[100010];
int finished[100010];
int count=0;
struct student stu[100010];
void makelist(int i,int student){
	STUDENT *temp;
	temp=&stu[i];
	STUDENT *temp2;
	temp2=(STUDENT*)malloc(sizeof(STUDENT));
	temp2->element=student;
	temp->right=temp2;
	temp2->right=NULL;
}
void dfs(int node){
	STUDENT *temp;
		int now;
		visited[node]=1;
		
		int next;
		temp=&stu[node];	
		temp=temp->right;
		next=temp->element;
		
		if(visited[next]=1){
			if(finished[next]==0){
				while(visited[next]!=1){
				printf("?");
					temp=&stu[next];
					next=temp->right->element;
					count++;
				}
			}
		}
		else
		dfs(temp->element);
		finished[node]=1;
}
int main(){
	int testcase;
	scanf("%d", &testcase);
	int i;
	while(testcase--){
		int studentnum;
		count=0;
		scanf("%d", &studentnum); 
		for(i=1;i<=studentnum;i++){
			int student;
			scanf("%d", &student);
			makelist(i,student);
		}
		for(i=1;i<studentnum;i++){
			if(visited[i]!=1){
				dfs(i);
			}
		}
		printf("c:%d\n", count);
	}
}
