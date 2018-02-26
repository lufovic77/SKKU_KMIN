#include <stdio.h>

int* selectionsort(int*, int );
int* selectionsort2(int*, int );

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	int* Aarray = (int*)malloc(sizeof(int)*n);
	int* Barray = (int*)malloc(sizeof(int)*n);
	
	int i;
	
	for(i=0;i<n;i++){
		scanf("%d", Aarray+i);
	}
	Aarray=selectionsort(Aarray,n);
	for(i=0;i<n;i++){
		scanf("%d", Barray+i);
	}
	Barray=selectionsort2(Barray,n);
	
	int sum=0;
	for(i=0;i<n;i++){
	 
	
	sum+=Aarray[i]*Barray[i];
	}

	printf("%d", sum);
	
		
	
}
int* selectionsort(int* number, int size){
	int i,j,k=0;
	
	int min;
	int temp;
	
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

int* selectionsort2(int* number,int size){
	int i,j,k=0;
	
	int max;
	int temp;
	
	for(i=0;i<size;i++){
		max=number[i];
		
		for(j=i;j<size;j++){
			if(max<=number[j]){
			max=number[j];
			k=j;
			}
			
			
			
		}
		temp=number[i];
		number[i]=max;
		number[k]=temp;
	}
	
	return number;
	
	
	
}

