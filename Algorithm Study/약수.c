#include <stdio.h>
int* selectionsort(int*,int);

int main(){
	
	int number;
	
	scanf("%d", &number);
	
	int i;
	
	int array[51];
	int* array2;
	
	for(i=0;i<number;i++)
	scanf("%d", &array[i]);
	
	array2=selectionsort(array,number);
	
	printf("%d", array[0]*array[number-1]);
	
	
}

int* selectionsort(int* number,int size){
	int min;
	int temp;
	int i,j,k;
	
	for(i=0;i<size;i++){
		min=number[i];
		
		for(j=i;j<size;j++){
			if(min>=number[j]){
			min=number[j];
			k=j;
			}
			
			
			
		}
		temp=number[i];
		number[i]=min;
		number[k]=temp;
	}
	
	return number;
}
