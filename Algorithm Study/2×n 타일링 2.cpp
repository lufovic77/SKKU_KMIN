#include <stdio.h>



int main(){
	
	int n;
	scanf("%d", &n);
	
	int ans;
	
	if(n==1){
		printf("1");
		return 0;
	}
	
	if(n==2){
		printf("2");
		return 0;
	}

	
	int array[1005];
	
	int i;
	
	array[1]=1;
	array[2]=2;
	
	for(i=3;i<=n;i++){
		
		array[i]=((array[i-1]+array[i-2]))%10007;
	
		
	}
	
	
	
	printf("%d", array[n]);
	
	
}
