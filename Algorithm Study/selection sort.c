#include <stdio.h>
#include <stdlib.h>

int* selectionsort(int *, int);


// ��� �����~~ �׳� �ش� �׷쿡��  �ּڰ��̳� �ִ��� ã�� ���ʳ����� ����������~

int main(){
	
	int i;
	
	int n;
//	printf("size (size should be less than 100) : ");
	scanf("%d", &n);
	
//	printf("Please type the unsorted numbers \n");
	
	int number[500001];
	int* subnumber;	
	
	for(i=0;i<n;i++)
	scanf("%d",(number+i));
	
	
	subnumber=selectionsort(number, n);
	
	//���� subenumber�� ���ĵ� �迭�� 
	

	int m;
	scanf("%d", &m);
	
	int* answer =(int*)malloc(sizeof(int)*m);
	
	int* mcase =(int*)malloc(sizeof(int)*m);

	for(i=0;i<m;i++)
	scanf("%d", (mcase+i));
	
	int min=0,max=m,middle=0;

	int j;
	
	int count =0;
	
	for(i=0;i<m;i++){
		
		count=0;
		
		while(min<=max){
			
			printf("?\n");
			
			middle=(min+max)/2;
			
			if(mcase[i]==subnumber[middle]){
				count++;
				TO:
				if(mcase[i]==subnumber[middle-1]){
					count++;
					middle--;
					goto TO;
					
				}
				THERE:
				if(mcase[i]==subnumber[middle+1]){
					count ++;
					middle++;
					goto THERE;
				}
					
				
				else 
				break;
				
				
				
			}
			
			
			
			
			if(mcase[i]>=subnumber[middle]){
				min=middle;
				continue;
				
			}
			
			if(mcase[i]<subnumber[middle]){
				max=middle;
				continue;
			}
			
			
		}
		
		answer[i]=count;
	}


for(i=0;i<m;i++)
printf("%d ", answer[i]);

	free(answer);
	free(mcase);
	
} 

int* selectionsort(int* number, int size){
	int i,j,k=0;
	
	int min;
	int temp;
	
	for(i=0;i<size;i++){
		min=number[i];
		
		for(j=i;j<size;j++){
			if(min>=number[j]){
			min=number[j];
			k=j;
			}
			
			
			
		}
		temp=number[i];
		number[i]=min;
		number[k]=temp;
	}
	
	return number;
	
	
	
}
