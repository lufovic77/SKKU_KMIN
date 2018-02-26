#include <stdio.h>

int data[2][100010];


void quicksort(int first , int last){
	if(first < last){
		int split;
		split = splitpoint( first, last);
        quicksort(first, split-1);
        quicksort(split +1, last);
	}
}
int splitpoint(int first,int last){
	
	int i,j;
	
	int pivot=data[1][first];
	
	int temp=0,temp2;
	
	int left=first+1;
	
	int right =last;
	
	while(left<=right){
		
		while(pivot>=data[1][left] && left<=right)
		left++;
		
		while(pivot<=data[1][right] && (left)<=right)
		right--;
		
		
		if(left<=right){
			temp2=data[1][left];
			data[1][right]=temp2;
		}
	}
	temp2=data[1][right];
	data[1][right]=pivot;
	data[1][first]=temp2;
	return right;
}
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
	int pivotpri=data[1][first]; 
	
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
	temp2=data[1][right];
	data[0][right]=pivot;
	data[1][right]=pivotpri;
	data[0][first]=temp;
	data[1][first]=temp2;
	return right;
}

int main(){
	int size=0;
	scanf("%d", &size);
	int i;
	for(i=0;i<size;i++){
		scanf("%d%d",&data[0][i],&data[1][i]);		
	}
	quickSort(0,size-1);
	int temp=0;
	int index=0;
	while(index!=size){
		if(data[0][index]==data[0][index+1]){
			while(data[0][index]==data[0][index+1])
			index++;
			quicksort(temp,index);
		}
		else
		index++;
		temp=index;
		
	}
	
	
	
	for(i=0;i<size;i++){
		printf("%d %d", data[0][i],data[1][i]);
		if(i!=size-1)
		printf("\n");
	}
	
}


