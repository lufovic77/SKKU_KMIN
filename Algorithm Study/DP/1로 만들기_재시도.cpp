#include <stdio.h>
#include <cstdio>
#include <memory.h>
#include <algorithm>
using namespace std;
int dp[10000];
`

int count=0;
int cal(int n){
	count++; 
	if(n==1)
	return count;
	printf("n: %d, count:%d\n ", n, count);
	if(n%3==0){
	 cal(n/3);
	}
	if(n%2==0){
	 cal(n/2);
	}
	 cal(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	memset(dp, 40000, -1);
	printf("%d", cal(n));
}
