#include <stdio.h>
int*fn(){
	int a[3];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	return a;
	
}
int main(){
	printf("%d%d%d\n",fn()[0],fn()[1],fn()[2]);
}
