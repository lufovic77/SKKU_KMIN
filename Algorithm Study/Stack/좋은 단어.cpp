#include <stdio.h>
#include <string.h>
char stack[100000];
char string[100][100002];
int main(){
	int N;
	scanf("%d", &N);
	int i;
	for(i=0;i<N;i++)
	scanf("%s", string[i]);
	int top;
	int count=0;
	for(i=0;i<N;i++){
		int size=strlen(string[i]);
		stack[0]=string[i][0];
		top=0;
		int j;
		for(j=1;j<size;j++){
			if(stack[top]==string[i][j] )
			top--;
			else{
				top++;
				stack[top]=string[i][j];
			}
		}
		if(top==-1)
		count++;
	} 
	printf("%d", count);
}
