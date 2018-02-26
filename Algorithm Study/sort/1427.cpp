#include <stdio.h>
int array[20];
void merge(int * array,int low, int middle,int high){
	int left[20],right[20];
	int i,k;
	int n1=middle-low+1,n2=high-middle;
	for(i=0;i<n1;i++)
		left[i]=array[i+low];
	for(k=0;k<n2;k++)
		right[k]=array[k+middle+1];
	i=0,k=0;
	int j=low;
	while(i<n1&&k<n2){
		if(left[i]>=right[k]){
			array[j]=left[i];
			i++;j++;
		}
		else{	
			array[j]=right[k];
			k++;j++;
		}
	}
	while(i<n1){
		array[j]=left[i];
		i++;j++;
	}
	while(k<n2){
		array[j]=right[k];
		k++,j++;
	}
	return ;
}

void mergeSort(int * array, int low,int high){
	if(low<high){
		int middle=(int)(low+high)/2;
		mergeSort(array,low, middle);
		mergeSort(array,middle+1,high);
		merge(array,low,middle,high);
	}
	
}
int main(){
	int i=0,size=0;
	int num;
	scanf("%d", &num);
	while(num>0){
		array[i]=num%10;
		num/=10;
		size++;
		i++;
	}
	mergeSort(array,0,size-1);
	for(i=0;i<size;i++)
	printf("%d", array[i]);
	
}
