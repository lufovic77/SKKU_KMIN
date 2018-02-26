#include <stdio.h>
#include <math.h>
int array[100];
int rev(int n){
	int i=0,j;
	while(n!=0){
		array[i]=n%10;
		n=n/10;
		i++;
	}
	int answer=0;
	for(j=i-1;j>=0;j--)
	answer+=pow(10,i-j-1)*array[j];
	return answer;
}
int main(){
	int x,y;
	scanf("%d%d", &x,&y);
	int revx=rev(x);
	int revy=rev(y);
	printf("%d", rev(revx+revy)); 
}
