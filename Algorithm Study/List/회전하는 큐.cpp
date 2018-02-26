#include <stdio.h>
#include <math.h>
int queue[100];
int dequeue[100];
int count=0;
int N;
int size;
int main(){
	int M;
	scanf("%d%d", &N,&M);
	int i;
	size=N;
	for(i=0;i<N;i++)
	queue[i]=i+1;
	int head=0;
	for(i=0;i<M;i++)
	scanf("%d", dequeue+i);
	for(i=0;i<M;i++)
	dequeue[i]--;
	int sub1,sub2;
	int j;
	int m,n;
	int index=dequeue[0];
	for(m=0;m<M;m++){
		int nowposition=dequeue[m];
		index=nowposition;
/*		printf("\n------------\n");
		for(n=0;n<size;n++)
		printf("%d ", queue[n]);
		printf("\nhead:%d index:%d", head, index);
		printf("\n------------\n");
		*/
		if(head> index){
			sub1=(head-index);
			sub2=(size-head+index);
			if(sub1>=sub2){
				while(sub2--){
					head++;
					if(head==size)
					head=0;
					count++;
				}
				if(head==index){
			 	size--;
			 for(i=head;i<size;i++){
			 	queue[i]=queue[i+1];
			 } 
			 continue;
		}	
			}
			else{
				while(sub1--){
					head--;
					if(head==-1)
					head=size-1;
					count++;
				}
			}if(head==index){
			 	size--;
			 for(i=head;i<size;i++){
			 	queue[i]=queue[i+1];
			 } 
			 continue;
		}	
			
		}
		else if (head<index){
			sub1=index-head;
			sub2=head+size-index;
			if(sub1>=sub2){
				while(sub2--){
					head--;
					if(head==-1)
					head=size-1;
					count++;
				}
				if(head==index){
			 	size--;
			 for(i=head;i<size;i++){
			 	queue[i]=queue[i+1];
			 } 
			 continue;
		}	
			}
			else{
				while(sub1--){
					head++;
					if(head==size)
					head=0;
					count++;
				}
				if(head==index){
			 	size--;
			 for(i=head;i<size;i++){
			 	queue[i]=queue[i+1];
			 } 
			 continue;
		}	
			}
			
		}
		else{
			size--;
			 for(i=head;i<size;i++){
				dequeue[i]--;
			 } 
		}
	}
	printf("%d",count);
}

