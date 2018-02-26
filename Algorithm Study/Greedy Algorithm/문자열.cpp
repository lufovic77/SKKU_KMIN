#include <stdio.h>
#include <string.h>
char A[60];
char B[60];
int main(){
	scanf("%s", A);
	scanf("%s", B); 
	int alen=strlen(A);
	int blen=strlen(B);
	int i,j;
	int max=0;
	int check;
	for(i=0;i<=blen-alen;i++){
		int count=0;
		for(j=0;j<alen;j++){
			if(A[j]==B[j+i])
			count++;
		}
		if(count>=max){
			max=count;
			check=i;
		}
	}
	printf("%d", alen-max);
}
