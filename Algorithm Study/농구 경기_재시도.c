#include <stdio.h>
int answer[100];
int main(){
	int N;
	scanf("%d", &N);
	int i;
	char name[40];
	for(i=0;i<N;i++){
		scanf("%s", &name);
		char first=name[0];
		answer[first-'a']++;
	}	
	int count=0;
	for(i=0;i<26;i++){
		if(answer[i]>=5){
			count++;
			printf("%c", i+'a');
		}
	} 
	if(count==0)
	printf("PREDAJA");
}
