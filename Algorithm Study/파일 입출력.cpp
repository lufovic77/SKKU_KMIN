#include <stdio.h>


int main(){
	
	FILE* stream1;
	
	stream1=fopen("","rt");
	
	FILE* stream2;
	
	stream2=fopen("C:\\Users\\lufov\\OneDrive\\Text2.txt", "w");
	
	int input=0;
	
	
	while(input!=EOF){
		
		input =fgetc(stream1);
		fputc(input,stream2);
		
		
	}
	
	
	
	fclose(stream1);
	fclose(stream2);
	
	
	
}
