#include <stdio.h>

// 단어의 개수~

int main(){
	char sentence[1122221];
	gets(sentence);
	
	int i=0;
	int count =0;
	
	while(sentence[i]!='\0'){
		if (sentence[i]==' ')
		count ++;
		
		i++;
	}
	
	if(sentence[0]==' ')
	printf("0");
	else if(sentence[0]=='\0')
	printf("0");
	else
	printf("%d", count+1);
	
	
} 
