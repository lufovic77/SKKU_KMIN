/*
#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX = 1000001;
 
int dp[MAX];
 
int f(int n){
    if(n == 1) return 0; // base case
    if(dp[n] != -1) return dp[n]; // 이미 계산함
 
    int result = f(n-1) + 1;
    if(n%3 == 0) result = min(result, f(n/3) + 1);
    if(n%2 == 0) result = min(result, f(n/2) + 1);
    dp[n] = result;
    
    return result;
}
 
int main(){
    int N;
    scanf("%d", &N);
    fill(dp, dp+MAX, -1);
    printf("%d\n", f(N));
}*/

#include <stdio.h>
#include <cstdio>
#include <algorithm>
using namespace std;
int array[2][100001];
int status[2][100001];
int dp[100001][3];
int n;
int sticker(int column, int state){	
	if(column==n) return 0;
	if(dp[column][state] != -1) return dp[column][state]; // 이미 계산됨
	
	int result=sticker(column+1,0);
	if(state!=1) result=max(result,sticker(column+1,1)+array[0][column]);
	if(state!=2) result=max(result,sticker(column+1,2)+array[1][column]);
	
	
    dp[column][state] = result;
	return result;
	//return result;
}

int main(){
	int T;
	scanf("%d", &T);
	int i,j,m;
	for(i=0;i<T;i++){
		scanf("%d", &n);
		for(m=0;m<n;m++)
			scanf("%d", &array[0][m]);
		for(m=0;m<n;m++)
			scanf("%d", &array[1][m]);
			
			
       for(int i=0; i<n; i++)
            for(int j=0; j<3; j++)
                dp[i][j] = -1;
        // dp로 문제 품
		printf("%d\n",sticker(0,0));
	}
}
