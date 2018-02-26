#include <stdio.h>
#include <memory.h>
int main(){
	int N;
	scanf("%d", &N);
	if(N%2==1){
		printf("0");
		return 0;
	}
	int answer[35];
	if(N==2){
		printf("3");
		return 0;
	}
	memset(answer,0,sizeof(answer));
	int i,j;
	answer[4]=11;
	for(i=6;i<=30;i+=2){
		if(i%4==0){
			answer[i]=answer[i/2]*answer[i/2]+3*3*2+12+2;
			
			for(j=i/2;j>=4;j=-4){
				
			}
		}
		else
		answer[i]=answer[i-2]*3+6+2;
	}
	printf("%d", answer[N]);
}

/*
8 의 결과는 153 이고

12의 결과는 2131 입니다.

*/
