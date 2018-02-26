#include <stdio.h>
char array[120];
char answer[120];
int main(){
	scanf("%s",array);
	int i=1,j=1;
	answer[0]=array[0];
	while(array[i]!='\0'){
		if(array[i]=='-'){
			answer[j]=array[i+1];
			i++;
			j++;
		}
		i++;
	}
	for(i=0;i<j;i++)
	printf("%c", answer[i]);
	return 0;
}
