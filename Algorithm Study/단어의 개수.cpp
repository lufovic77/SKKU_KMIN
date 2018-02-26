#include <stdio.h>
int main(){
	int i,index=0;
	int q=0;
	int count=0;
	char string[1000001];
 	gets(string);
	while(string[index]!='\0'){
		if(string[index]==' '){
			index++;
			continue;
		}
		if(string[index]!=' '){
			while(string[index]!=' ' && string[index]!='\0'){
				index++;
			}
			count++;
		}
		q++;
	}
	printf("%d", count);
}
