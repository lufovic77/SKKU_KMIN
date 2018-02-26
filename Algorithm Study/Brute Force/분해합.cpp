#include <stdio.h>
int main(){
	int N;
	scanf("%d", &N);
	int num=0;
	int temp=N;
	while(temp!=0){
		temp=temp/10;
		num++;
	}
	int tempN=N-9*num;
	int array[15];
	int i,j;
	temp=tempN;
	while(temp!=N){
		int sum=0;
		for(i=0;i<num;i++){
			array[i]=temp%10;
			temp=temp/10;
			sum+=array[i];
		}
		if(sum+tempN==N){
			printf("%d", tempN);
			return 0;
		}
		tempN++;
		temp=tempN;
	}
	if(temp==N){
		printf("0");
		return 0;
	}
	
}
