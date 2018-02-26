#include <stdio.h>
#include <memory.h>
#include <string.h>

char P[110];
char name[110];
int dp[101][101];
int match (int w, int s){
	if(dp[w][s]!=-1)
	return dp[w][s];
	int pos=0;
	if(w<strlen(P)&&s<strlen(name)&&(P[w]==name[s])){
		return dp[w][s]=match(w+1,s+1);
	}
	
	
	//printf("pos:%d, length:%d", pos, strlen(pattern));
	if(w==strlen(P)){
		//printf("1");
		return dp[w][s]=(s==strlen(name));
	}
	int skip=0;
	if(P[w]=='*'){
		//printf("2");
	/*	for(skip=0;w+skip<=strlen(name);skip++){
			if(match(w+1,skip+s))
			return dp[w][s]=1;
	*/		
			if(match(w+1,s)||(s<strlen(name)&&match(w,s+1))){
				return dp[w][s]=1;
			}
		}
	
		//printf("3");
	return dp[w][s]=0;
}
int main(){
	scanf("%s", P);
	int N,i;
	scanf("%d", &N);
	for(i=0;i<N;i++){
	memset(dp,-1,sizeof(dp));
		scanf("%s",name);
		//match(P,name);
		if(match(0,0)){
			printf("%s\n", name);
		}
			//printf("wtf\n");
		//memset(name,)
	}
}
