#include <stdio.h>
int answer[30];
int main(){
	char array[102];
	int i=0;
	int index=0;
	gets(array);
	while(array[i]!='\0'){
		
		index=array[i]-97;
		answer[index]+=1;
		i++;
		//	printf("index:%d\n", index);
	}
	for(i=0;i<26;i++){
	printf("%d ", answer[i]); 
	}
}
