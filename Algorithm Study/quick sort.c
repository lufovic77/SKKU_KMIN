#include <stdio.h>

int data[2][100010];

void quickSort(int first , int last){
	if(first < last){
		int split;
		split = splitPoint( first, last);
        quickSort(first, split-1);
        quickSort(split +1, last);
	}
}

int splitPoint(int first,int last){
	
	int i,j;
	
	int pivot=data[0][first];
	
	int temp=0,temp2;
	
	int left=first+1;
	
	int right =last;
	
	while(left<=right){
		
		while(pivot>=data[0][left] && left<=right)
		left++;
		
		while(pivot<=data[0][right] && (left)<=right)
		right--;
		
		
		if(left<=right){
			temp=data[0][left];
			temp2=data[1][left];
			data[0][left]=data[0][right];
			data[1][left]=data[1][right];
			data[0][right]=temp;		
			data[1][right]=temp2;
		}
	}
	temp=data[0][right];
	data[0][right]=pivot;
	data[0][first]=temp;
	return right;
}

int main(){
	int size=0;
	scanf("%d", &size);
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&data[0][i]);
		data[1][i]=i;
		
	}
	quickSort(0,size-1);
	
	for(i=size-1;i>=0;i--){
		printf("%d", data[1][i]);
		if(i!=(0))
		printf("\n");
		
	}	
}


