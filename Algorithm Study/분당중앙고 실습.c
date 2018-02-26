#include <stdio.h>
int main(){
	int array[10];
	int i,j;
	int temp;
	for(i=0;i<=4;i++)
	scanf("%d", &array[i]);
	for(j=0;j<5;j++){	
		for(i=0;i<=4-j;i++){
	
			if(array[i]<=array[i+1] && i+1<5){
			
			temp=array[i];
			array[i]=array[i+1]; 
			array[i+1]=temp;
			}
		}
	}
	for(i=0;i<=4;i++)
	printf("%d ",array[i]);
}
