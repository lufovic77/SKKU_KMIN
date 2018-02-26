#include <stdio.h>
void dp(int index,int i){
	if(i>=index)
	return ;
	printf("%d", i);
	dp(index,i+1);
}

int main(){
	int i,j;
	int ans;
	int index=3;
	dp(index,0);
	
    
  
}
