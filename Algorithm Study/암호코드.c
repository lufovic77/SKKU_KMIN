#include <stdio.h>

//두자리를 해석 시 26을 넘어가면 안됨! 

void single(int);
void twin (int);
int method=0;
int size;
int code[5000];

int main(){

	int j;
	gets(code);
	
	printf("%d and %d\n", code[3],code[5]);				//worth to be posted on github
	int index=0;
	int i=0;
	size=0;
	
	while (code[i]!='\0'){
		size++;
		i++;
	}
	

	printf("size:::%d", size);
	
	if((10*code[0]+code[1])<27)
	twin(3);
	else
	single(2);	
	
	
} 

void single (int index){
	if(index>size)
	return;
	
	
	if((10*code[index]+code[index+1])<27){
	index+=2;
	method++;
	twin(index);
	return ;
	}
	else{
	index++;
	method++;
	single(index);
	return;
	}	
}

void twin(int index){
	
	if(index>size)
	return;
	
	if((10*code[index]+code[index+1])<27){
	index+=2;
	method++;
	twin(index);
	return ;
	}
	else{
	index++;
	method++;
	single(index);
	return;
	}	
}

