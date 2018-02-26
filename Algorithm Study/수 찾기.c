#include <stdio.h>



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




int main(){
	
	int n;
	
	scanf("%d", &n);
	
	int narray[100001];
	
	int i;
	
	for(i=0;i<n;i++)
	scanf("%d", (narray+i));
	
	int m;
	
	scanf("%d", &m);
	
	int marray[100001];
	
	for(i=0;i<m;i++)
	scanf("%d", (marray+i));
	
	

	
	quickSort(narray,0,n-1);
	
	
	int answer[100001];
	
	int first,last;
	
	
	
	int middle;
	
	int finding;
	for(i=0;i<m;i++){
		
			
	first=0,last=n-1;
		
		finding=marray[i];
		
		
		
		while(first<=last){
			
					
					
				
			
			 
		middle=(first+last)/2;
		
			if(finding==narray[middle] || finding==narray[middle+1]  ){
				answer[i]=1;
				break;
			}
			if(first==middle && finding!=narray[middle]){
				answer[i]=0;
				break;
			}
			
			if(finding>=narray[middle]){
				first=middle;
				continue;
				}
			
			if(finding<narray[middle]){
				last=middle;
				continue;
			}
		
		
		
			
		}
		
		
		
		
		
		
	}
	
	
	for(i=0;i<m;i++){
		
		printf("%d\n", answer[i]);
	}
	
	
//It is sorted(narray)

}
