#include <stdio.h>
#include <math.h>

int main(){
	int x,y,w,h;
	
	scanf("%d%d%d%d", &x,&y,&w,&h);
	
	int a[4];
	
	a[0]=abs(x-w);
	a[1]=abs(y-h);
	a[2]=x;
	a[3]=y;
	
	int min;
	min=a[0];
	
	int i;
	
	for(i=0;i<4;i++){
		if(min>=a[i])
		min=a[i];
	}
printf("%d", min);
	
	
}
