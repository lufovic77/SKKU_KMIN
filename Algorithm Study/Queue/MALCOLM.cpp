#include <stdio.h>
#include <string.h>
char name[300000][21];
int queue[300000];
int main(){
	int N, K;
	scanf("%d%d", &N,&K);
	int i,j;
	for(i=0;i<N;i++)
	scanf("%s", name[i]);
	int head=0,tail=K;
	
	for(i=0;i<=K;i++){
		queue[i]=strlen(name[i]);
	}
	int count=0;
	for(i=head;i<tail;i++){
		for(j=i+1;j<=tail;j++){
			if(queue[i]==queue[j])
			count++;
		}
	}
	head++;
	tail++;
	int m,n;
	queue[tail]=strlen(name[tail]);
	for(i=1;i<N-K;i++){
		for(m=head;m<tail;m++)
		if(queue[m]==queue[tail])
		count++;
		head++;
		tail++;
		queue[tail]=strlen(name[tail]);
	}
	printf("%d", count);
}
