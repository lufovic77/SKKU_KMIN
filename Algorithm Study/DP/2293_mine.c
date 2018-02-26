#include <stdio.h>
int cache[10001];
int main(){
	int n,k;
	scanf("%d%d", &n,&k);
	int i,j,m;
	int coin[101];
	cache[0]=1;
	for(i=0;i<n;i++)
	scanf("%d", coin+i);
	for(i=0;i<n;i++){
		for(j=0;j<=k;j++){
			if(coin[i]+j<=k){
				cache[coin[i]+j]=cache[j]+cache[coin[i]+j];
			}
		}
	}
	printf("%d", cache[k]);
}
