#include <stdio.h>
int main(){
	int array[20]={6,4,7,3,8,5,6,1,2,3,67,9};
	int i,j;
	for(i=1;i<12;i++){
		int key=array[i];
		j=i-1;
		while(j>=0 && key<array[j]){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
	}
	for(i=0;i<20;i++)
	printf("%d ", array[i]);
}
