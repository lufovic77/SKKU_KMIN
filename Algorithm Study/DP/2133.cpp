#include <stdio.h>
#include <memory.h>	
int N;
void dp(int index, int left,int* array){
	printf("%d %d\n",index,left);
	int i;
	if(index>N)
	return ;
	if(left<0)
	return ;
	if(left==0){
		for(i=1;i<=30;i++)
		printf("%d ", array[i]);
		printf("\n");
	}
	
	for(i=0;left-i*index>=0;i++){
		array[index]++;
		dp(index+2,left-i*index,array);
	}
		
}
int main(){

	int array[31];
	memset(array,0,sizeof(array));
	scanf("%d", &N);
	dp(2,N,array);
}
