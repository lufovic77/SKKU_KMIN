#include <stdio.h>
int stack[100001];
int answer[100001];
int main(){
	int N;
	scanf("%d", &N);
	int i;
	for(i=0;i<N;i++)
	scanf("%d", stack+i);
	int temp=0;
	int length=1;
	int area=stack[N-1];
	int count=1;
	int difference=0;
	int j=0;
	//every time coding, try to make the general source code not treating the 
	//exceptional cases every time
	for(i=N-2;i>=0;i--){
		count++;
	//	difference=stack[i+1]-stack[i];
		if(stack[i]<=stack[i+1]){
			temp=count*stack[i];
			if(temp>area){
				area=temp;
				continue;
			}
			else{
				answer[j]=area;
				j++;
				continue;
			}	
		}
		if(stack[i]>stack[i+1]){
			answer[j]=area;
			area=stack[i];
			j++;	
			count=1;
		}	
	}
	answer[j]=area;
	i=1;
	
	int max=answer[0];
	for(i=0;i<=j;i++){
		if(answer[i]>=max)
		max=answer[i];
	}
	printf("%d",max);
}
