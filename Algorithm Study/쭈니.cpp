#include <stdio.h>
#include <limits.h>

int stone[100];
int k;
int last;
int min=INT_MAX;

void dp(int now,int count){
	
	if(now==last){
		if(count<=min)
		min=count;
		return ;
	}
	if(now>last){
		return ;
	}
	
	int i; 
	int check=0;
	
	for(i=now+1;i<=now+k;i++){
		if(i>last)
		break;
		if(stone[i]==1){
			dp(i,count+1);
			check++;
		}
	}
	
		if(check==0)
		return ;
}

//111001000000000000000000000000000

int main(){
	
	int a;
	scanf("%d", &a);
	int i;
	
	int index;
	for(i=0;i<a;i++){
		scanf("%d", &index);
		stone[index]=1;
		if(i==a-1)
		last=index;
	}
	//k==5;
	scanf("%d", &k);
	
	int dum;
	scanf("%d",&dum );
	
	dp(0,0);
	
	printf("%d",min);
	
}
