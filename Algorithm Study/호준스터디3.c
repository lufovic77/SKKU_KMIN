#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int n,m;
	
	scanf("%d%d", &n,&m);
	
	
	int i;

	int h=(int)ceil(log2(n));
	
	int x= pow(2,(h));
	
	
	int *array=(int*)malloc(sizeof(int)*x);
	
	//-> 여기까지 하면 맨 아래에 leaf node는 깔아 놓은 것 
	
	
	//최대값을 찾는 트리 
	
	int index= (x/2);
	
	printf("index %d  n %d \n", index,n+index); 
	
	for(i=(index);i<=(n+index);i++)
	scanf("%d", &array[i]);
	
	for(i=(n+index+1);i<(x);i++)
	array[i]=0;
	
	
	int j;
	
	while(index!=1){
		
		while(index!=(index*2)){
		
	//	printf("index is: %d\n", index);
		
		
			if(array[index]>=array[index+1]){
				 array[index/2]=array[index];
			}
		
			else{
				
				array[index/2]=array[index+1];
			
			}
			index+=2;
		
		}
		
		index=index/2;
		
	}
	
	for(i=1;i<=x;i++){
		printf("%d ",array[i]);
	}
	 

	return 0;



	
/*	
	int array[100001];
	
	for(i=0;i<n;i++)
	scanf("%d",(array+i) );
*/	
	
	int array2[100000][3];
	
	int* temp;
	
	for(i=0;i<m;i++){
		
		temp=array;
	scanf("%d%d",&array2[i][0],&array2[i][1] );
	quickSort(temp,array2[i][0],array2[i][1]);
	
	 
	printf("%d %d\n",temp[array2[i][0]],temp[array2[i][1]] );
	
	}
	
	
	
		
	
	
	
	
	free(array); 
	
} 
