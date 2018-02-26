#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int num;
    scanf("%d", &num);
int i=0;
    int* array = (int*)malloc(sizeof(num)*4);
    while ( i!=num){
        scanf("%d", &array[i]);
        i++;
          }
    int min= array[0],max=array[0];
    int k;
    int j;
    for(i=0;i<num;i++){
        
        if(min>=array[i]){
          k=i  ;
          min=array[k];
        }
        if(max<=array[i]){
        	j=i;
        	max=array[j];
		}
    }
    min=array[k];
    
    max=array[j];
    printf("%d %d", min,max);
}
