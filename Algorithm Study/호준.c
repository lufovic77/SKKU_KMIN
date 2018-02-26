#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int n,m;
	
	scanf("%d%d", &n,&m);
	
	
	int i;

	int h=(int)ceil(log2(n));
	
	int x= pow(2,(h));
	
//	printf("x : %d", x);
	
	int *array=(int*)malloc(sizeof(int)*(pow(2,h+1))-1);
	
	int size=pow(2,h+1)-1;
	//-> 여기까지 하면 맨 아래에 leaf node는 깔아 놓은 것 
	
	
	//최대값을 찾는 트리 
	
	int index= (x);
	
	for(i=(index);i<(n+index);i++)
	scanf("%d", &array[i]);
	

//	printf("dsdgsdgsdfgfsdf");
	
//	printf("??");
	int j;
	
	while(index>1){
		int temp=index; 
		while(index!=(temp*2)){
		
//		printf("index is :%d\n", index);
		
			if(array[index]>=array[index+1]){	
				 array[index/2]=array[index];
			}
		
			else{
				
				array[index/2]=array[index+1];
			
			}
			index+=2;
		
		}
		
		index=temp   /2;
		
	}
	
	size++;
	/*
	for(i=1;i<=size;i++){
		printf("%d ",array[i]);
	}
	 
*/	int start,end;
 	int a,b;
 	int ans;
 	

int k;
for(k=0;k<m;k++){


 
 	int max;	
 	
 	scanf("%d%d", &a,&b);
 	
 	
 	start=a+(size/2)-1;
 	end=b+(size/2)-1;
 	
 	max=array[start];
	 
	 while(start<end){
//	 	printf("start: %d end: %d\n", start,end);
		for(i=(n+index+1);i<(x);i++)
	array[i]=0;
	
	if(array[end]>=max)
	max=array[end];

if(array[start]>=array[end])
ans=array[start];
else
ans=array[end];

printf("ans:%d\n", ans);


	 	if(start%2==1){
	 	start++;
	 		if(array[start]>=max){
	 			max=array[start];
	 			
			 }
	 	}
	 
	if(array[start]>=max){
	 			max=array[start];
	 			
			 }

	 	if(end%2==0){
	 		end--;
			if(array[end]>=max){
	 			max=array[end];
	 			
			 }		
		 }
	
		if(start>=end){
			printf("max3 : %d\n", ans);
			printf("??");
		continue;
		}
//	printf("max2: %d\n", max);
	
		 
		 if(array[end]>=max){
	 			max=array[end];
	 			
			 }
		 
		 
		 if(start%2==0 && end%2==1){
		 	start=start/2;
		 	end=(end-1)/2;
		 }
		 
		 
//		 printf("end :%d\n", end);
	 	
	 	
	 }
	 	printf("max3 : %d\n", max);




index=x;
	
	for(i=(n+index+1);i<(x);i++)
	array[i]=2147483647;




 
 	
 	int min;	

 	int ans2;
 	
 	start=a+(size/2)-1;
 	end=b+(size/2)-1;
 	
 	min=array[start];
	 
	 while(start<end){
//	 	printf("start: %d end: %d\n", start,end);
	
	if(array[end]<=min)
	min=array[end];

if(array[start]<=array[end])
ans2=array[start];
else
ans2=array[end];

printf("ans2:%d\n", ans2);


	 	if(start%2==1){
	 	start++;
	 		if(array[start]<=min){
	 			min=array[start];
	 			
			 }
	 	}
	 
	if(array[start]<=min){
	 			min=array[start];
	 			
			 }

	 	if(end%2==0){
	 		end--;
			if(array[end]<=min){
	 			min=array[end];
	 			
			 }		
		 }
	
		if(start>=end){
			printf("max3 : %d\n", ans2);
			printf("??");
		continue;
		}
//	printf("max2: %d\n", max);
	
		 
		 if(array[end]<=min){
	 			min=array[end];
	 			
			 }
		 
		 
		 if(start%2==0 && end%2==1){
		 	start=start/2;
		 	end=(end-1)/2;
		 }
		 
		 
//		 printf("end :%d\n", end);
	 	
	 	
	 }
	 	printf("min3 : %d\n", min);







	 







	 
}







	
	
		
	
	
	
	
	free(array); 
	
} 
