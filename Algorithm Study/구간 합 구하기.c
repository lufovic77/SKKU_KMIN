#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int n,m,k;
	
	scanf("%d%d%d", &n,&m,&k);

	
	int i;

	int h=(int)ceil(log2(n));
	
	int x= pow(2,(h));

	long long *array=(long long*)malloc(sizeof(long long)*(pow(2,h+1))-1);

	
	int size=pow(2,h+1)-1;
	
	int attempt=m+k;

	int index= (x);
	
	for(i=(index);i<(n+index);i++){
	scanf("%lld", &array[i]);

	}
	int j;
	int temp;



	for(i=(n+index);i<=(size);i++)
	array[i]=0;

	index=x;
	
	while(index>1){
	 temp=index; 
		while(index!=(temp*2)){

				 array[index/2]=array[index]+array[index+1];
		
			index+=2;
		
		}
		
		index=temp   /2;
		
	}
	
/*
	for(i=1;i<=size;i++)
	printf("%d ", array[i]);
	
	return 0;
*/	
	
	
	long long ans1=0,ans2=0;
	
	
	
	size++;

	int start,end;
 	int a,b,c;	
 
		long long answer[100001];

	int q;
	long long sum=0;
	int index2=0;
		int p=0;
	for(q=0;q<attempt;q++){
	index=x;
	
	ans1=0;
	ans2=0;

	sum=0;
	


	scanf("%d%d%d", &a,&b,&c);
	index2=index+b-1;
	if(a==1){	

		array[index+b-1]=c;

	
		while(index2>0){
			
			if(index2%2==1){
				
				array[(index2-1)/2]=array[index2]+array[index2-1];
				
				index2=(index2-1)/2;
				
				
			}
			
			else{
				
				array[index2/2]=array[index2]+array[index2+1];
				
				index2=index2/2;
				
			}
			
			
			
			
		}
//		for(i=1;i<size;i++)
//	printf("%d ", array[i]);
	

		
		continue;
		
		
	}
	
	else{
		index=x;
	start=index+b-1;
	end=index+c-1;
	
	
//	printf("start=:%d, end:%d\n", start,end);		
	


	 while(start<=end){
	ans1=array[start];
	ans2=array[end];

	 	if(start%2==1){
	 
	 	sum+=array[start];
	 	start++;
	 	}
	 
	

	 	if(end%2==0){
	 	
			sum+=array[end];
			end--;	
		 }
	
		if(start>end){
		
			break;
			
		}


		 
		if(start%2==0 && end%2==1){
		 	start=start/2;
		 	end=(end-1)/2;
		 }
		 
		 if(start==end){
		 sum+=array[start];
		
		 break;
	}
	 }
	 answer[p]=sum;
	 
p++;




	

	}	
}



for(i=0;i<k;i++){
	printf("%lld", answer[i]);	
	if(i!=(k-1))
	printf("\n");
}

	
	
	free(array); 

} 
