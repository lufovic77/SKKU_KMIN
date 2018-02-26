#include <stdio.h>


void recursive(int depth, int * a){
	int i;
	if(depth==0){	
		for(i=0;i<=2;i++)
		printf("%d", a[i]);
		printf("\n");
		return;
	}	
	
	for(i=1;i<=2;i++){	
		a[3-depth]=i;
		recursive(depth-1,a);
	}
	
}

int main(){
	int a[3];
	a[0]=-1;
	a[1]=-1;
	a[2]=-1;
	
	recursive(3,a);
}
