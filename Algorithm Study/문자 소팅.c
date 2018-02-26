#include <stdio.h>

int main(){
	
	char answer[] ={'c','a','e','a'};
	
	int i; 
		
		
		for(i=0;i<4;i++)
	printf("%c ", answer[i] );	
	
	printf("\n");
		
	char min;
	int j,k=0;
	char temporary;
		for(i=0;i<4;i++){
		min=answer[i];
		
		for(j=i;j<4;j++){
			if(min>=answer[j]){
			min=answer[j];
			k=j;
			}
			
			
			
		}
		temporary=answer[i];
		answer[i]=min;
	answer[k]=temporary;
	}
	
	
//	int i;
	
	for(i=0;i<4;i++)
	printf("%c ", answer[i] );
	
	
	
	
}
