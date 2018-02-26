#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
char A[1001];
char B[1001];
int max1,max2;
int count=0;
int dp[1001][1001];
int index=0;
char answer[1001];
int lcs(int pos1,int pos2){
		printf("?");
	if(pos1>max1 || pos2>max2) return 0;
	if(dp[pos1][pos2]!=0)return dp[pos1][pos2];
	int a,b,c=-1;
	if(A[pos1]==B[pos2]){
		printf("%c", A[pos1]);
		answer[index]=A[pos1];
		index++;
		c=1;
		c+=lcs(pos1+1,pos2+1);
	}
	int maximum=max(lcs(pos1+1,pos2),lcs(pos1,pos2+1));
	maximum=max(maximum,c);
	dp[pos1][pos2]=maximum;
	return dp[pos1][pos2];	
}
int main(){
	gets(A);
	gets(B);
	max1=strlen(A);
	max2=strlen(B);
	printf("%d\n",lcs(0,0)-1);
	for(int i=0;i<index;i++)
	printf("%c", answer[i]);
}
