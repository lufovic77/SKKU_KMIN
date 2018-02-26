#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int dp[1010];
int main(){
	int N;
	cin>>N;
	int num[1010];
	for(int i=1;i<=N;i++)
		cin>>num[i];
	dp[1]=1;
	for(int i=2;i<=N;i++){
		if(num[i]>num[i-1]){
			dp[i]=dp[i-1]+1;
			continue;
		}
		else{
			int count=dp[i-1];
			for(int j=i-1;j>0;j--){
				if(num[i]>num[j]){
					count=max(count,dp[j]+1);
				}
			}
			if(count==0)
			dp[i]=dp[i-1];
			else
			dp[i]=count;
		}
	}
	for(int i=1;i<=N;i++)
	printf("%2d ", dp[i]);
}
