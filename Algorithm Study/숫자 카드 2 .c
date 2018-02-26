#include <stdio.h>
int array[500001];
int answer[500001];
void quickSort(int* data,int first , int last){
	if(first < last){
		int split;
		split = splitPoint(data, first, last);
        quickSort(data, first, split-1);
        quickSort(data, split +1, last);
	}
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
	int N;
	scanf("%d", &N);
	int i;
	for(i=0;i<N;i++)
	scanf("%d",(array+i));
	quickSort(array,0,N-1);
	/*
	for(i=0;i<N;i++)
	printf("%d ", array[i]);
	*/
	int count=0; 
	int M;
	scanf("%d", &M);
	
			int asdf=0;
	for(i=0;i<M;i++){
		int first=0,last=N-1,middle=0;
		count=0;
		int finding;
		scanf("%d", &finding);
		if(finding==array[N-1] && finding==array[0]){
			answer[i]=N;
			continue;
		}
		while(first<=last){
			middle=(first+last)/2;
			if(finding==array[middle]){
				int temp=middle;
				int tempfirst,templast,tempmiddle=middle,tempmiddle2=middle;
				if(finding==array[middle+1]){
					while(finding==array[tempmiddle+1]){
						tempfirst=tempmiddle;
						templast=N-1;
						while(tempfirst<=templast){
								tempmiddle=(tempfirst+templast)/2;
								if(finding==array[tempmiddle]){
									break;
								}
								else if(finding>array[tempmiddle])
								tempfirst=tempmiddle+1;
								else
								templast=tempmiddle-1;
						}
						if(tempmiddle+1<N && finding==array[tempmiddle+1])
					tempmiddle++;
				}
					}
			//		printf("asdf:%d, tempmiddle:%d\n", asdf,tempmiddle);
				middle=temp;
				 
				if(finding==array[middle-1]){
					while(finding==array[tempmiddle2-1]){
						tempfirst=0;
						templast=tempmiddle2;
						while(tempfirst<=templast){
							tempmiddle2=(tempfirst+templast)/2;
							if(finding==array[tempmiddle2]){
								break;
							}
							else if(finding>array[tempmiddle2])
							tempfirst=tempmiddle2+1;
							else
							templast=tempmiddle2-1;
						}
						if(tempmiddle2-1>=0 && finding==array[tempmiddle2-1])
					tempmiddle2--;
					}	
				}
			//		printf("asdf:%d, tempmiddle2:%d\n", asdf,tempmiddle2);
				if(tempmiddle==tempmiddle2)
				count=1;
				else{
		//	printf("?");	
				count=tempmiddle-tempmiddle2+1;
			}
			
				break;
			}
			else if(finding<array[middle])
				last=middle-1;
			else
				first=middle+1;
		}
		answer[i]=count;
		asdf++;
	}
	for(i=0;i<M;i++){
		printf("%d ", answer[i]);
	}	
}
