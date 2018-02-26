#include <stdio.h>
#include <string.h>
char html[100][260];
int stack[100];
char br[6];
char original[5]={"br /"};
int main(){
	int i=0;
	while(html[i-1][0]!='#'){
		gets(html[i]);
		i++;
	}
	
	int size=i-1;
	int k;
	int top=-1;
	int now=0;
	int check;
	
	int m;
	for(i=0;i<size;i++){
		check=0;
		top=-1;
		m=0;
		int length=strlen(html[i]);
		for(k=0;k<length;k++){
		now=0;
			if(html[i][k]=='<'){
					k++;
				if(html[i][k]=='b'){
					br[m]=html[i][k];
					br[m+1]=html[i][k+1];
					br[m+2]=html[i][k+2];
					br[m+3]=html[i][k+3];
					if(strcmp(br,original)==0){
						k+=5;
						continue;
					}
				}
				if(html[i][k]=='/'){
					now-='/';
					check=1;
				}
				while(html[i][k]!='>'){
					now+=html[i][k];
					k++;
					if(html[i][k]==' ')
					break;
					
				}
				if(check==0){
					top++;
					stack[top]=now;
				}
				else{
					if(stack[top]==now){
						top--;
					}
					else{
						check=2;
						printf("illegal\n");
						break;
					}
				}
				
			}
			else
			continue;
		}
		if(top>=0 && check!=2)
		printf("illegal\n");
		else{
			if(check!=2)
			printf("legal\n");
		}
		
	}
}
