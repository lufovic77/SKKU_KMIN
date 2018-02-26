#include <stdio.h>
void quickSort(int*,int,int);
int splitPoint(int*,int,int);

int main(){
	
	
	int N;
	scanf("%d", &N);
	int i;
	int array[10000];
	for(i=0;i<N;i++){
		scanf("%d", &array[i]);
	}
	quickSort(array,0,N-1);
	long long sum=0;
	for(i=N;i>=1;i--){
		sum+=array[N-i]*i;
	}
	printf("%lld", sum);
	
}

void quickSort(int* data,int first , int last){
		
	//	 printf("???????-quicksort1\n");
		
	if(first < last){
		
		int split;

		split = splitPoint(data, first, last);
		
 // printf("???????-quicksort2\n");

        quickSort(data, first, split-1);
        quickSort(data, split +1, last);
        
      
	}
	
	//else 
	//return data;
}

int splitPoint(int* data,int first,int last){
	
	int i,j;
	
	int pivot=data[first];
	
	int temp=0;
	
	int left=first+1;
	
	int right =last;
	
	while(left<=right){
		
		while(pivot>=data[left] && left<=right)
		left++;
		
		while(pivot<=data[right] && (left)<=right)
		right--;
		
		
		if(left<=right){
			temp=data[left];
			data[left]=data[right];
			data[right]=temp;
			
			
		}
		
		
		
	
	}
	
	temp=data[right];
	
	data[right]=pivot;
	data[first]=temp;
	
	return right;
	
	
	
	
}


