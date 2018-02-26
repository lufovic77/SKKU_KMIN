#include <stdio.h>
#include <math.h>
int tree[3000000];
int realtree[3000000];
int main(){
	int k;
	scanf("%d", &k);
	long long weight=0;
	int i;
	int num=pow(2,k+1)-1;
	for(i=2;i<=num;i++)
	scanf("%d", tree+i);
	int difference;
	int currentnode=pow(2,k);
	int lastnode=pow(2,k+1)-1;
	while(currentnode>=1){
		i=currentnode;
		while(i<=lastnode){
			if(tree[i]>=tree[i+1]){
				
			}
			else{
				
			}
			
			i+=2;
			printf("??");
		}
		currentnode=currentnode/2;
		lastnode=lastnode/2;
	}
	printf("%d", realtree[1]);
}
