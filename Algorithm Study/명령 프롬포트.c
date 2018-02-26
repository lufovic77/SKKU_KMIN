#include <stdio.h>
#include <string.h>

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	char file[51][51];	
	
	int i;

	
	
	for(i=0;i<n;i++){
scanf("%s", file[i]);				//이거 ㄹㅇ 참신했다 ㅋㅋㅋㅋㅋㅋ 
	}
	
	int length=strlen(file[0]);
//	printf("length : %d\n", length);
	int j;
	int count =0;
	
	char answer [50];
	
	for(i=0;i<length;i++){
		count =0;
		for(j=1;j<n;j++){
			
			
			if(file[j][i]!=file[j-1][i])
			count++;
			
		//	printf("count is %d \n", count);
			
		}
		
//		printf("file [0][i] is %c\n", file[0][i]);
		
		if(count==0)
		answer [i]= file[0][i];
		else
		answer[i]='?';
		
	}
	

	for(i=0;i<length;i++){
		printf("%c", answer[i]);
		}
	
	
	
}
