#include <stdio.h>
#include <stdlib.h>
int main(){
	int size;
	scanf("%d", &size);
	/*
	int ** array;
	array = (int **)malloc(sizeof(int)*size);
	int num; 
	int i;
	for(i=0;i<size;i++){
		*(array+i)=(int *)malloc(sizeof(int)*size);
	}
	*/
	
	int array[500][500];
	int j;
	int k=1;
	int i=0;
	int num;
	for(i=0;i<size;i++){
		
		for(j=0;j<k;j++){
			scanf("%d", &num);
			array[i][j]=num;
		}
		k++;	
printf("잘되냐?"); 
	}printf("잘되니");
	int sum=0;
	sum=array[0][0];
	int row=1, column=0;
	while(row!=size){
	
		if(column==0){
		if(array[row][0]>=array[row][1]){
		sum+=array[row][0];
		goto TO;
	}
		else{
		sum+=array[row][1];
		column++;
		goto TO;
	}
		}
		if(column==row){
				if(array[row][row]>=array[row][row-1]){
		sum+=array[row][row];
		goto TO;
	}
		else{
		sum+=array[row][row-1];
		column--;
		goto TO;
	}
		}
				
		
		if(array[row][column]>=array[row][column+1])
sum +=array[row][column];
else{
sum+= array[row][column+1];
column++;
goto TO;
}printf("%d\n", sum);
TO:
row++;
}
//	printf("%d", sum);
} 
