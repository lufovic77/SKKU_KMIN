#include <stdio.h>

char answer[100];
int index=0;

void checking(char* array,int size){
	
	int i=0,j=0;
	int sum=0;
	int count=0;
	int temp=0;
	int first, last=-1,middle;
	
	for(i=0;i<size;i++){
	//sum=0;
	sum+=array[i];
//	printf("sum is ::%d", sum); 
	if(sum==81*(double)((i+1)/2)){
		if(i%2==0){
		answer[index]='N',answer[index+1]='O';
		index+=2;
		continue;
		}
		else{
		//	printf("들어왔니?");
			first=(last+1);
			last=(i+1);
			middle=(first+last)/2;
			j=0;		
			
			while(temp>=0){
				temp=(middle-j+i);
				if((array[middle+j-1]-array[middle-j])==1||(array[middle+j-1]- array[middle-j])==-1)
				count++;	
				j++;					
			}		
			count--;
			printf("count is::::%d///// i::::%d //\n", count, i);
			if(count==(i+1)/2){
			answer[index]='Y',answer[index+1]='E', answer[index+2]='S';
		index+=3;
		}
		}
		sum=0; 
	}
	
		
	}
	
	
}


int main(){
	int num;
	scanf("%d", &num);
	//일단 홀수면 무조건 틀림
	
	int i,j;
	int count;
	char par[50];

	for(i=0;i<num;i++){
		getchar();
		count=0;
		gets(par);
	j=0;
	while(par[j]!='\0'){
		count++;
		j++;
	}
//	count=getchar();
//	printf("%d", count);
	if(count%2!=0){
		answer[index]='N',answer[index+1]='O';
		index+=2;
	}
//	printf("NO\n");	
	
	else{
		checking(par, count);
		
		
	}
	
	
	}
	i=0;
	while(answer[i]!='\0'){	
	printf("%c", answer[i]);
		if(answer[i]=='O'||answer[i]=='S')
		printf("\n");
	
		i++;
		
	}
} 

