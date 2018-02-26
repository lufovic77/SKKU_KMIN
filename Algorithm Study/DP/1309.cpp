#include <stdio.h>
#include <memory.h>
/*
int N;
int cache[100000][3];
int dp(int index,int prev){
	if(index==N)
	return 1;
	int &ret=cache[index][prev];
	if(ret!=-1)
	return ret;
	if(prev==0){
		ret=(dp(index+1,0)+dp(index+1,1)+dp(index+1,2))%9901;
	}
	else if(prev==1){ //filled in left place
		ret=(dp(index+1,0)+dp(index+1,2))%9901;
	}
	else{	//filled in right place
		ret=(dp(index+1,0)+dp(index+1,1))%9901;
	}
	return ret;
}
int main(){
	memset(cache,-1,sizeof(cache));
	scanf("%d", &N);
	int answer=dp(0,0)%9901;
	printf("%d", answer%9901);
}*/
//Recursive mode

int main(){
	int N;
	scanf("%d", &N);
	int i,j,k;
	int cache[100001][3];
	cache[0][0]=1,cache[0][1]=0,cache[0][2]=0;
	for(i=1;i<=N;i++){
		for(k=0;k<3;k++){
			if(k==0){
				cache[i][k]=(cache[i-1][0]+cache[i-1][1]+cache[i-1][2])%9901;
			}
			else if(k==1){
				cache[i][k]=(cache[i-1][0]+cache[i-1][2])%9901;
			}
			else{
				cache[i][k]=(cache[i-1][0]+cache[i-1][1])%9901;
			}
		}
	}
	printf("%d", (cache[N][0]+cache[N][1]+cache[N][2])%9901);	
}
//Iterative mode
