#include <stdio.h>
int height[100010];
int stack[100010];
int main(){
	int N;
	scanf("%d", &N);
	int i;
	for(i=0;i<N;i++)
	scanf("%d", height+i);
	stack[0]=height[0];
	int top=0;
	int count=1;
	int max=height[0];
	for(i=1;i<N;i++){
		count=1;
		int now=height[i];
		if(now>stack[top]){
			top++;
			stack[top]=now;
		}
		else{
			while(top>=0){
				top--;
				count++;
				if(max<=stack[top]*count)
				max=stack[top]*count;			
			}
			if(max<=now*(i+1))
			max=now*(i+1);
			stack[top]=now;
		}
	}
	count=1;
		while(top>=0){
		if(max<=count*(stack[top]))
		max=count*(stack[top]);
		top--;
		count++;
		}
		

	printf("%d", max);
}
