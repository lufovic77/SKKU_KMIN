#include <stdio.h>

	int array[200000];
int main(){
	int N;

	
	
	scanf("%d", &N);

	int index=1;
	int index2=1;


	
	
	//-> �������� ǥ�� �Ϸ� (1�� ǥ��) 

	array[1]=1;
	array[2]=2;
	array[3]=3;
	array[4]=1;
	
	int i,j;
	int p=0;
	
	
	int ans2=0;

	
	for(i=5;i<=N;i++){
	
		array[i]=1234567890;
		for(j=1;j*j<=i;j++)	{
			
			if(array[i]>array[i-j*j]+1){
				
				array[i]=array[i-j*j]+1;
				
				
				
			}
			
			
		}
	
	
	
		


		
	}
	
	printf("%d", array[N]);
	
}




