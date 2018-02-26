#include <stdio.h>
char cal[10];
int main(){
	int M;
	scanf("%d", &M);
	int i;
	int n; 
	int status=0;
	while(M--){
		scanf("%s", cal);
		scanf("%d", &n);
		n--;
		if(cal[0]=='a'){
			if(cal[1]=='d'){  
				if((status & (1<<n))==0){
					status=(status | (1<<n));
				}
			}
			else{//all case
				int i;
				for(i=0;i<20;i++)
				status=(status | (1<<i));
			}
		}
		else if(cal[0]=='r'){
			if((status & (1<<n))!=0)
			status=(status & ~(1<<n));
		}
		else if(cal[0]=='c'){
			if((status & (1<<n))!=0)
			printf("1\n");
			else
			printf("0\n");
		}
		else if(cal[0]=='t'){
			if((status & (1<<n))!=0)
			status=(status & ~(1<<n));
			else
			status=(status | (1<<n));
		}
		else{//empty case
			int i;
			for(i=0;i<20;i++)
			status=(status & ~(1<<i));
		}
		
	}
}
