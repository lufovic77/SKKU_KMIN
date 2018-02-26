#include <stdio.h>

int main(){
	int n,f;
	
	scanf("%d%d", &n,&f);
	
	int i;
	
	int moks;
	
	moks=n/100;
	
	int temp;
	
	int wanted = moks*100;
	
	temp=wanted;
	
	for(i=0;i=99;i++){
		if(wanted%f==0){
			if((wanted-temp)<10){
			printf("0%d", wanted-temp);
			break; 
			}
		printf("%d",wanted-temp);
		break;
		}
		wanted++;
		
	}
	
	
}
