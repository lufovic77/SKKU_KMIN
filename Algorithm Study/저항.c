#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	
	char array[10][10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};

//	char compare[5]="black";
	//char compare2[5]="black";
	
//	printf("%d", strcmp(compare,array[0]));


	int i,j;
	
	char finding[10];
	int omm[4];
	
	for(i=0;i<3;i++){
	
	scanf("%s", finding);
	
		for(j=0;j<10;j++){
		if(strcmp(array[j],finding)==0){
			omm[i]=j;
			break;
		}
		}
	//	printf("¹¹³Ä %d\n", omm[i]);
	
	}
	
//	printf("%d", ((10*omm[0]+omm[1]))*pow(10,omm[2]));	

long long answer;

answer= (omm[0]*10+omm[1])*pow(10,omm[2]);

printf("%lld", answer);

	
}
