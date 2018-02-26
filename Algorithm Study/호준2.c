#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int n,m;
	
	scanf("%d%d", &n,&m);
	
	
	long long answer[100001][2]; 
	
	
	int i;

	int h=(int)ceil(log2(n));
	
	int x= pow(2,(h));
	
//	printf("x : %d", x);
	
	long long *array=(long long*)malloc(sizeof(long long)*(pow(2,h+1))-1);
	long long *array2=(long long*)malloc(sizeof(long long)*(pow(2,h+1))-1);
	
	int size=pow(2,h+1)-1;
	//-> 여기까지 하면 맨 아래에 leaf node는 깔아 놓은 것 
	
	
	//최대값을 찾는 트리 
	
	int index= (x);
	
	for(i=(index);i<(n+index);i++){
	scanf("%lld", &array[i]);
	array2[i]=array[i];
	}
	
	
//		printf("n+index+1:%d  size: %d\n", n+index+1,size);
	for(i=(n+index);i<=(size);i++)
	array[i]=0;
	
		for(i=(n+index+1);i<=(size);i++)
	array2[i]=2147483647;


//	printf("dsdgsdgsdfgfsdf");
	
//	printf("??");
	int j;
	int temp;
	
	while(index>1){
	 temp=index; 
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
	
	index=x;
	
	while(index>1){
		 temp=index; 
		while(index!=(temp*2)){
		
//		printf("index is :%d\n", index);
		
			if(array2[index]<=array2[index+1]){	
				 array2[index/2]=array2[index];
			}
		
			else{
				
				array2[index/2]=array2[index+1];
			
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
 	long long ans;
 	
 	
 	
 	

int k;
for(k=0;k<m;k++){


 
 	long long max;	
 	
 	scanf("%d%d", &a,&b);
 	
 	
 	start=a+(size/2)-1;
 	end=b+(size/2)-1;
 	
 	max=array[start];
	 	if(array[end]>=max)
	max=array[end];	
	
	

	 while(start<end){

	
	

if(array[start]>=array[end])
ans=array[start];
else
ans=array[end];


	 	if(start%2==1){
	 
	 		if(array[start]>=max){
	 			max=array[start];
	 			
			 }	start++;
	 	}
	 
	if(array[start]>=max){
	 			max=array[start];
	 			
			 }

	 	if(end%2==0){
	 	
			if(array[end]>=max){
	 			max=array[end];
	 			
			 }		end--;	
		 }
	
		if(start>=end){
		continue;	
		}
		 
		 if(array[end]>=max){
	 			max=array[end];
	 			
			 }
		 
		 
		 if(start%2==0 && end%2==1){
		 	start=start/2;
		 	end=(end-1)/2;
		 }
		 
	 }
answer[k][1]=max;




index=x;
	


 
 	
 	long long min;	

 	long long ans2;
 	
 	start=a+(size/2)-1;
 	end=b+(size/2)-1;
 	
 	min=array2[start];
	 	if(array2[end]<=min)
	min=array2[end];
	 while(start<end){
//	 	printf("start: %d end: %d\n", start,end);
	


if(array2[start]<=array2[end])
ans2=array2[start];
else
ans2=array2[end];

//printf("ans2:%d\n", ans2);


	 	if(start%2==1){
	 
	 		if(array2[start]<=min){
	 			min=array2[start];
	 			
			 }start++;
	 	}	
	 
	if(array2[start]<=min){
	 			min=array2[start];
	 			
			 }

	 	if(end%2==0){
	 	
			if(array2[end]<=min){
	 			min=array2[end];
	 			
			 }end--;		
		 }	
	
		if(start>=end){
	//		printf("max3 : %d\n", ans2);
	//		printf("??");
		continue;
		}
//	printf("max2: %d\n", max);
	
		 
		 if(array2[end]<=min){
	 			min=array2[end];
	 			
			 }
		 
		 
		 if(start%2==0 && end%2==1){
		 	start=start/2;
		 	end=(end-1)/2;
		 }
		 
		 
//		 printf("end :%d\n", end);
	 	
	 	
	 }
answer[k][0]=min;


}




for(i=0;i<m;i++){
printf("%lld %lld", answer[i][0],answer[i][1]);
if(i!=(m-1))
printf("\n");

}

	
	
	free(array); 
	free(array2);
	
} 
