#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int i;
	int* x=(int*)malloc(sizeof(int)*n);
	int* y=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++){
		scanf("%d %d", (x+i), (y+i));
		
	}
	int temp=0;
int j;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(*(x+j)<=*(x+i)){
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
				temp=y[j];
				y[j]=y[i];
				y[i]=temp;
				
			}
			
		}
	}

for(i=0;i<n;i++)
printf("%d %d\n", x[i], y[i]);

free(x);
free(y);
	
}
