#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int array[10000];
	int i,j;
	for(i=0;i<n;i++)
	scanf("%d", array+i);
	int t;
	for(i=1;i<n;i++){
		t=array[i];
		for(j=i-1;j>=0&&t<array[j];j--){
			array[j+1]=array[j];
		}
		array[j+1]=t;
	}
	int count=array[n-1];
	if(count==0){
		printf("0");
		return 0;
	}
	i=n-1;
		while(i>=0){
			if(count==(n-i)){
				printf("%d", count);
				return 0;
			}
			if(count==array[i-1])
			i--;
			else
			count--;
		}
		
}
