#include <stdio.h>
int array[1000001];
int main(){
	int N;
	scanf("%d", &N);
	int i;
	int number=2;
	int index=0;
	int count=0;
	array[2]=1;
	array[3]=1;
	if(N==2){
		printf("1");
		return 0;
	} 
	if(N==3){
		printf("1");
		return 0;
	}
	for(i=4;i<=N;i++){
		count=0;
		number=i;
		if(number%3==0){
			index=number/3;
			array[i]=array[index]+1;			
		}
		else if(number%2==0){
			index=number/2;
			array[i]=array[index]+1;			
		}
		else{
			while(number%3!=0 || number%2!=0){
				number--;
				count++;
			}
			if(number%3==0){
				index=number/3;
				array[i]=array[index]+count-2;			
			}
			 if(number%2==0){
				index=number/2;
				array[i]=array[index]+count-2;			
			}
			
		}
		
		
	}
	printf("%d", array[N]);
}
