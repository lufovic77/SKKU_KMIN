#include <stdio.h>
int main(){
	int height[15];
	int i,j;
	int sum=0;
	for(i=0;i<9;i++){
		scanf("%d", &height[i]);
		sum+=height[i];
	}
	int fixi,fixj;
	int temp=sum;
	for(i=0;i<8;i++){
		for(j=i+1;j<9;j++){
			temp-=height[i];
			temp-=height[j];
		if(temp==100){
			fixi=i;
			fixj=j;
			break;
			}
		temp=sum;			
		}
	}
	int array[10];
	int index=0;
	for(i=0;i<9;i++){
		if(i==fixi || i==fixj)
		continue;
		else{
			array[index]=height[i];
			index++;
		}
	}
	for(i=1;i<7;i++){
		int key=array[i];
		j=i-1;
		while(key<array[j] && j>=0){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
	}
	for(i=0;i<7;i++)
	printf("%d\n", array[i]);
	
	
}
