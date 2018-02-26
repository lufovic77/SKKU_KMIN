#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
 
int array[500001];
int answer[500001];
int main(){
	int N;
	scanf("%d", &N);
	int i;
	for(i=0;i<N;i++)
	scanf("%d",(array+i));
	
    sort(array, array + N);
	 
	int count=0; 
	int M;
	scanf("%d", &M);
	int finding; 
	 for(i=0;i<M;i++){
        int first=0,last=N-1,middle=0;
        count=0;
        scanf("%d", &finding);
        while(first<=last){
            middle=(first+last)/2;
            if(finding==array[middle]){
                count++;
                int temp=middle;
                while(finding==array[middle+1]){
                    middle++;
                    count++;
                }
                middle=temp;
                while(finding==array[middle-1]){
                    middle--;
                    count++;
                }
                break;
            }
            else if(finding<array[middle]){
                last=middle-1;
            }
            else{
                first=middle+1;
            }
        }
		answer[i]=count;
	}
	for(i=0;i<M;i++){
		printf("%d ", answer[i]);
	}	
}
