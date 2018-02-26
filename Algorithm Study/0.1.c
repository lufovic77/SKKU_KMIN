#include <stdio.h>

int main(){
	int n,i,num,result=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &num);
		result+=num;
	}
	printf("%d\n%d", n,result);	
}
