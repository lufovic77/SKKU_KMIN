#include <stdio.h>
int num[1001];
int main(){
	int n,k;
	scanf("%d%d", &n,&k);
	int i,j;
	int count=0;
	for(i=2;i<=n;i++){
		if(num[i]==1)continue;
		for(j=i;j<=n;j+=i){
			if(num[j]==1) continue;
			count++;
			num[j]=1;
			if(count==k){
				printf("%d", j);
				return 0;
			}
		}
	}	
}
