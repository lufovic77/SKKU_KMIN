#include <stdio.h>
#include <stdlib.h>
//Using a malloc

int main(){
	char** nd;
	
	int size;
	
	printf("Size : ");
	scanf("%d", &size);
	
	nd=(char**)malloc(sizeof(char*)*size);
	
	int i;
	for(i=0;i<size;i++){
		*(nd+i)=(char*)malloc(sizeof(char)*10);
		
	}
	
	int j;
	
	for(i=0;i<size;i++){
		gets(*(nd+i));
	}
	
	for(i=0;i<size;i++){
		puts(*(nd+i));
	}
	
	
	
	
	
}
 
