#include <stdio.h>
#include <memory.h>



int search(char* finding,char isit,int index){
//	int count=0;
	
	int i;
	int gotcha=-1;
	
	for(i=0;i<index;i++){
		if(finding[i]==isit){
			gotcha=i;
			break;
		}
		
		
	}
	
	if(gotcha==-1)
	return -1;
	
	
	
	
	return gotcha;
}


int main(){
	
	char name[200][50];
	
	int i;
	
	int n;
	
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	scanf("%s", name[i]);
	
	
	char finding[200];
	
	finding[0]=name[0][0];
	
	int index=1;
	
	int count[200];
	
	memset(count,0,400);
	
	

	int temp=0;
	
	for(i=1;i<n;i++){
		
		
		if(search(finding,name[i][0],index)==-1){
			finding[index]=name[i][0];
			index++;
			continue;
		}
		
		else {
			temp=search(finding,name[i][0],index);
			
			count[temp]++;
			
		}
		

		
		
	}
	
	for(i=0;i<index;i++)
	count[i]++;
	
/*	
	for(i=0;i<index;i++)
	printf("%d\n", count[i]);
*/	
	
	int counting=0;
	
	char answer[100];
	
	/*
	printf("counting: \n");
	for(i=0;i<index;i++)
	printf("%d ", count[i]);
	*/
	
	for(i=0;i<index;i++){
		if(count[i]>=5){
		answer[counting]=finding[i];
		counting++;
		}
	}
	
	
	if(counting==0){
	printf("PREDAJA");
	return 0;
	}
	 
//	printf("counting :: %d\n", counting);
	
	char min;
	int j,k=0;
	char temporary;
		for(i=0;i<counting;i++){
		min=answer[i];
		
		for(j=i;j<counting;j++){
			
			if(min>=answer[j]){
			min=answer[j];
			k=j;
			}
			
		}
		temporary=answer[i];
		answer[i]=min;
	answer[k]=temporary;
	}
	
	
	
for(i=0;i<index;i++){
		if(count[i]>=5){
			printf("%c", answer[i]);

		}
	}
	
//	printf("%c", finding[0]);
	
	
} 
