#include <stdio.h>

//bubble sort -> ��� �� ���Ҹ� ���� ������ ������ ���ʿ� ������, ū�� �����ʿ� ������ �Ѵ�.

int* bubblesort(int*, int);

int main(){
	
	int i;
	
	int size;
	printf("size (size should be less than 100) : ");
	scanf("%d", &size);
	
	printf("Please type the unsorted numbers \n");
	
	int number[101];
	int* subnumber;	
	
	for(i=0;i<size;i++)
	scanf("%d",(number+i));
	
	
	subnumber=bubblesort(number, size);	
	
	for(i=0;i<size;i++)
	printf("%d ", *(subnumber+i));
	
} 

int* bubblesort(int*number, int size){
	
	int i, j;
	int temp;
	
	for(i=0;i<size;i++){
		for(j=(size-1);j>=i;j--){
			if(number[j]<=number[j-1]){
				temp=number[j];
				number[j]=number[j-1];
				number[j-1]=temp;
			}
		}
		
	}
	
	return number;
}
