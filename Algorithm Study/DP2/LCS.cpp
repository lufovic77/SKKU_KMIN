#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
char A[1001];
char B[1001];
int max1,max2;
int count=0;
int dp[1001][1001];
int lcs(int pos1,int pos2){
	if(pos1>max1 || pos2>max2) return 0;
	if(dp[pos1][pos2]!=0)return dp[pos1][pos2];
	int a,b,c=-1;
	if(A[pos1]==B[pos2]){
		
		c=1;
		c+=lcs(pos1+1,pos2+1);
	}
	int maximum=max(lcs(pos1+1,pos2),lcs(pos1,pos2+1));
	maximum=max(maximum,c);
	dp[pos1][pos2]=maximum;
	return dp[pos1][pos2];	
}
int main(){
	scanf("%s", A);
	scanf("%s", B);
	max1=strlen(A);
	max2=strlen(B);
	printf("%d",lcs(0,0)-1);
	
}
