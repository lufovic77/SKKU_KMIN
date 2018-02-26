#include <stdio.h>
int main(){

int n, x;
scanf("%d%d", &n, &x);

int* array=(int*)malloc(sizeof(int)*n);


int count=0;
int result[10000];
int i;
for(i=0;i<n;i++){
	scanf("%d", (array+i));
	if(*(array+i)<x){

	result[count]=*(array+i);
	count++;
	}

}

for(i=0;i<count;i++)
printf("%d ", *(result+i));



}
