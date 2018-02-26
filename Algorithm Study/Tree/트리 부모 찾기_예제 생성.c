#include <stdio.h>
int main(){
	int i;
	FILE* stream;
	stream=fopen("input.txt","w");
	fprintf(stream,"100\n");
	for(i=1;i<=100;i++){
		
		fprintf(stream,"1 %d\n", i);
	}
	fclose(stream);
}
