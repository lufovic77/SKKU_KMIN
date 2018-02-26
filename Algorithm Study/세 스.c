#include <stdio.h>

int main(){
	
	double a,b,c;
	scanf("%lf%lf%lf", &a,&b,&c);
	int max=a;
	
	if(	((a/b)-1)*((c/b)-1)<=0)
	printf("%0.lf", b);
	else if(	((a/c)-1)*((b/c)-1)<=0)
			printf("%0.lf", c);
	else if(	((b/a)-1)*((c/a)-1)<=0)
	printf("%0.lf", a);
		
}

