#include <stdio.h>
#include <memory.h>
int queue[10000];
int index[10000];
int search(int now,int head, int tail){
	int i;
	int max=head;
	for(i=head+1;i<=tail;i++){
		if(queue[i]>queue[max])
		max=i;
	}
	return max;
}
int main(){
	int testcase;
	scanf("%d", &testcase);
	int n,m;
	int i,k;
	int head=0, tail=0;
	int now;
	int time=0;
	int check=0;
	int h;
	for(i=0;i<testcase;i++){
		memset(queue,40000,0);
		for(k=0;k<10000;k++)
		index[k]=k;
		head=0,tail=0;
		time=0;
		scanf("%d%d", &n,&m);	//n:queue size , m: position
	
		for(k=0;k<n;k++)
		scanf("%d", queue+k);
		int finding=queue[m];
		tail=k-1;
		now=-1;
		int nowindex=-1;
		int max=-1;
		while(nowindex!=m || max!=(head-1)  ){
				now=queue[head];
				nowindex=index[head];
				max=search(now,head,tail);
				/*
				printf("\n-----------\n");
				for(h=head;h<=tail;h++)
				printf("%d ", queue[h]);
				printf("\n");
				for(h=head;h<=tail;h++)
				printf("%d ", index[h]);
				printf("\n");
				printf("\n-----------\n");
				*/
				if(max==head){
					head++;
					time++;
				}
				else{
					tail++;
					index[tail]=nowindex;
					queue[tail]=now;
					head++;
				}
		}
		printf("%d\n", time);
		now=-1;
	}
}
