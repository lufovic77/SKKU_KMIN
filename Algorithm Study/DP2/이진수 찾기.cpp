#include <stdio.h>
#include <math.h>
int limit;
int N,L,I;
int check[40];
int sequence=0;
int find=0;
void change(int dec){
	int i;
	int bin[40];
	int n = N;
		for (i = n - 1; i >= 0; i--)
		{
			bin[i] = dec % 2;
			dec /= 2;
		}
		for (i = 0; i<n; i++)
		{
			printf("%d", bin[i]);
		}
		printf("\n");
	return ;
}
void counting(void){
	int i;
	int answer=0;
	int ret=0;
	for(i=0;i<N;i++){
		if(check[i]==1){
			answer++;
			ret+=pow(2,N-1-i);
		}
		if(answer>L)
		return ; 
	}
	sequence++;
	if(sequence==I){
		find=1;
		change(ret);
	}
}
void binary(int count){
	if(find==1)
	return;
	if(count==N) {
		counting() ;
		return ;	
	}
	check[count]=0;
	binary(count+1);
	check[count]=1;
	binary(count+1);
	return ;
}
int main(){
	limit=pow(2,N);
	scanf("%d%d%d", &N,&L,&I);
	binary(0);
}
/*
#include <stdio.h>
int dp[100][100];
int N,L,I; 
int count=0;
int binary(int n,int m){
	int &ret=dp[n][m];
	if(ret!=0)return ret;
	if(m==0 || n==0) return ret=1;
	
	count++;
	if(count==I){
		printf("answer:%d", ret);
	}
	ret = binary(n-1,m);
	if(m>0)ret+=binary(n-1,m-1);
	return ret;
}
int main(){
	scanf("%d%d%d", &N,&L,&I);
	printf("%d", binary(N,L));
}*/
