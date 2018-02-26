#include <stdio.h>
int L,C;
int check[20];
char answer[10000][20];
char character[20];
int rindex=0;
void subset(int n){
	int i;
	int count=0;
	int index=0;
int count1=0;//모음 
int count2=0;//자음 
	if(n==C){
		for(i=0;i<C;i++){
			if(check[i]==1){
				count++;
			}
		}
		if(count==L){
			
			for(i=0;i<C;i++){
				if(check[i]==1){
					if(character[i]=='a' ||character[i]=='e' ||character[i]=='i' ||character[i]=='o' ||character[i]=='u' ){
						count1++;
					}	
					else
					count2++;
				}
			}
			for(i=0;i<C;i++){
				if(check[i]==1 && count1>=1 && count2>=2){
					answer[rindex][index]=character[i];
					index++;
				}
			}
			if(count1>=1 && count2>=2)
			rindex++;
		}
	}
	else{
		check[n]=0;
		subset(n+1);
		check[n]=1;
		subset(n+1);
	}
}

int main(){
	scanf("%d%d", &L,&C);
	int i,j;
	for(i=0;i<C;i++)
	scanf(" %c", character+i);
	
	for(i=1;i<C;i++){
		int now=character[i];
		j=i-1;
		while(now<character[j] && j>=0){
			character[j+1]=character[j];
			j--;
		}
		character[j+1]=now;
	}
	subset(0); 
	for(i=rindex-1;i>=0;i--)
	puts(answer[i]);
	
}
