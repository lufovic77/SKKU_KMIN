#include <stdio.h>
int answer[11];
int main(){
	int n;
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	n=a*b*c;
	while(n!=0){
		int remainder=n%10;
		answer[remainder]+=1;
		n=n/10;
	}
	int i; 
	for(i=0;i<=9;i++)
	printf("%d\n", answer[i]);
}
