#include <stdio.h>
int main(){
	int L,P,V;
	int temp;
	int index=0;
	int sum; 
	while(1) {
		sum=0;
		scanf("%d%d%d", &L,&P,&V);
		if(L==0 && P==0 && V==0)
		break;
		temp=V;
		while(V>P){
			V-=P;
			sum+=L;
		}
		if(V>=L)
		sum+=L;
		else
		sum+=V;
		index++;
		printf("Case %d: %d\n", index,sum);
	}
}
