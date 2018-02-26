#include <stdio.h>
#include <string.h>
#include <memory.h>


int isFound(char*, int,int);

int main(){
	char array[1000001];
	
	scanf("%s", array);
	
//	strlwr(array);
	
	int count[1000000];
	
printf("??????????");
	
//	memset(count,0,1000000);

printf("??????????");
	
	int i,j=0;
	
	char temp[1000001];
	
	int length=strlen(array);
	
	int check=0;
	
	for(i=0;i<length;i++){
		check=isFound(temp,array[i],j);
		
		if(check>=0){
		temp[j]=array[i];
		j++;
		count[check]++;
		}
		else
		count[i]=check;
		
		
		
	}
	
	for(i=0;i<10;i++)
	printf("%d", count[i]);
	
	
}

int isFound(char* temp, int element,int size){
	int i;
//	int count=0;
	
	for(i=0;i<size;i++){
		if(temp[i]==element){
	//	count++;
		return i;
		}
		
	}
	
	return -1;
}
