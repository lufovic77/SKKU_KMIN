#include <stdio.h>
int answer[20];
int main(){
	long long N;
	int i=0;
	scanf("%lld", &N);
	int temp,temp2,temp3; 
	int array[100];
	int quotient=0;
	int sixnine=1;	


			temp2=N;
		while(temp>0){		//이게 문자열 처리의 핵심!! 
		temp=N;
		N=N/10;
		if(temp-N*10==0){
			array[i]=0;
			i++;
		}
		else{
		quotient=temp-N*10;
		array[i]=quotient;
		i++;
	}
}	int j;	
	int index=0;

	for(j=0;j<i-1;j++){
		
 		if(array[j]==6 || array[j]==9){
 			if(sixnine==2){
 				sixnine=1;
 				continue;
		}
			if(sixnine==1){
			answer[6]++;
			sixnine++;
			}
 		}
		else{
			index=array[j];
			answer[index]++;
	}
	} 
	int max=0;
	for(i=0;i<=8;i++){
		if(max<=answer[i])
		max=answer[i];
	}
	printf("%d", max);
}
