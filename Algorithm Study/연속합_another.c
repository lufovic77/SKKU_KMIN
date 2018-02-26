#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	int array[100000];
	for(i=0;i<n;i++)
	scanf("%d", array+i);
	int answer[100000];
	answer[0]=array[0];
	for(i=1;i<n;i++)
	answer[i]=answer[i-1]+array[i];
	int max=0;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if((answer[j]-answer[i])>=max)
			max=answer[j]-answer[i];
		}
	}
	printf("%d", max);
}
