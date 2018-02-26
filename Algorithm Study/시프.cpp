#include <stdio.h>
typedef struct node{
	int data;
	struct node* right;
}NODE;
int main(){
	int a,b;
	a=3;b=2;
	double ret=(double)a/b;
	printf("%f", ret);
}

