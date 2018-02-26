#include <stdio.h>
int weight[100010];
void quicksort(int left, int right){
  int k;
  int i, j, pivot;
  i = left;
  j = right;
  pivot = left;
  if(i >= j)
    return;
    
    while(i<j){
    	while(weight[++i]<weight[pivot]){
    		if(i>=right)
    		break;
		}
		while(weight[j]>weight[pivot]){
			j--;
			if(j<=left)
			break;
		}
		if(i<j){
			int temp;
			temp=weight[i];
			weight[i]=weight[j];
			weight[j]=temp;
		}
	}
	int temp2;
	temp2=weight[j];
	weight[j]=weight[pivot];
	weight[pivot]=temp2;
	quicksort(left,j-1);
	quicksort(j+1,right);
}
int main(){
	int N;
	scanf("%d", &N);
	int i;
	for(i=0;i<N;i++)
	scanf("%d", weight+i);
	
	quicksort(0,N-1); 
	int count=1;
	int max=weight[N-1]*count;
	while(count<=N){
		if(weight[N-count]*count>=max){
			max=weight[N-count]*count;
		}
		count++;
	}
	printf("%d", max);
	
}
