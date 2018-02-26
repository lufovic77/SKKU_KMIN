#include <stdio.h>
int dp(int n){
	if(n==0){
		return 1;
	}
	if(n<0)
	return 0;
	return dp(n-1)+dp(n-2)+dp(n-3);
}
int main(){
	int T;
	scanf("%d", &T);
	int n;
	int i;
	int count=0;
	for(i=0;i<T;i++){
		scanf("%d", &n);
		count=dp(n);
		printf("%d\n", count);
	}
}
