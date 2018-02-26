#include <stdio.h>

int main(){
	int N;
	
	scanf("%d", &N);
	
	int i;
	
	long long array [100];
	
	array[1]=1;
	array[2]=1;
	
	
	if(N==1){
		printf("1");
		return 0;
	}
	if(N==2){
		printf("2");
		return 0;
	}
	
	
	for(i=3;i<=N;i++){
		
		array[i]=array[i-1]+array[i-2];
		
		
	}
		
	printf ("%lld", array[N]);
	
	
	
}
