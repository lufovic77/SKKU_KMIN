#include <stdio.h>
#include <string.h>
#include <memory.h>

void Aprint(char a[]){
	int i;
	for(i=0;i<strlen(a);i++)
	printf("%c ", a[i]);
	printf("\n");
}

void recursive(int depth,char a[]){
 if(depth==-1){ 
  Aprint(a);
  return;
 } 
	printf("?");
 int i;
 for(i=1;i<=3;i++){ 
  a[3-depth]=i;
  recursive(depth-1,a);
  a[3-depth]=0;
 }
 
}

int main(){
	char a[4];
	memset(a,0,3);
	recursive(3,a);
}

