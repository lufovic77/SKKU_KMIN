#include <stdio.h>
#include <string.h>
char string[11];
int numbers[10];
int main(){
	scanf("%s", &string);
	int piece;
	int length=strlen(string);
	
	int i;
	
	for(i=0;i<length;i++){
		
		int x = string[i] - '0';
		numbers[x]++;
	}
	int temp=(numbers[6]+numbers[9]);
	if(temp%2==1){
		temp=temp/2;
		temp++;
	}
	else
	temp/=2;
	
	numbers[6]=temp;
	numbers[9]=temp;
	
	
	int max=0;
	for(i=0;i<10;i++){
		if(numbers[i]>=max)
		max=numbers[i];
	}
	
	printf("%d", max);
	
}
