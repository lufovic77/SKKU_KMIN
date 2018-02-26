#include <stdio.h>
int N;
int histogram[100010];
//int dp[20000][20000];
int maximum=0;
void square(int count, int index){
	if(count==N || index==N){
		return ;
	}
//	if(dp[count][index]!=0)
//	return ;
	int i;
	int min;
	min=histogram[index];
	for(i=index;i<=count;i++)
		if(min>=histogram[i])
		min=histogram[i];
	if(maximum<=min*(count-index+1) )
	maximum=min*(count-index+1);
	square(count+1, index);
	square(count+1, index+1);
}
int main(){
	int i;
	scanf("%d", &N);
	for(i=0;i<N;i++)
	scanf("%d", histogram+i);
	
	square(0,0);
	printf("%d", maximum);
}
