#include <stdio.h>
int N,S;
int count=0;
int count2=0;
int array[25];
int check[25];
void subset(int n){
	int i;
	if(n==N){
		long long sum=0;
		for(i=0;i<N;i++){
			if(check[i]==1){
				printf("%d ", array[i]);
				sum+=array[i];
				count2++;
			}
		}
		printf("\n");
		if(sum==S){
			if(count2>0)
			count++;
		}
		count2=0;
		sum=0;
	}
	else{
		check[n]=1;
		subset(n+1);
		check[n]=0;
		subset(n+1);
	}  					//재귀를 이렇게 활용할 수 있다니,,,,후덜덜,,,,, 
}

int main(){
	scanf("%d%d", &N,&S);
	int i;
	for(i=0;i<N;i++)
	scanf("%d", array+i);
	subset(0);
	printf("%d", count);	
}
