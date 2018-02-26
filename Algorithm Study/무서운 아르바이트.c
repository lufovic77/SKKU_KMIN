#include <stdio.h>
 int check(int*, int, int);
 int count1=0,count2=0,count3=0;
 
 int main(){
 	int n;
 	scanf("%d", &n);
 	int* paying=(int*)malloc(sizeof(int)*n);
 	int* pay=(int*)malloc(sizeof(int)*n);
 	int pay1;
 	int i, k=0;
 	int checking=0;
 	for(i=0;i<n;i++){
 	scanf("%d", &pay1);
 	pay[i]=pay1;
 	checking=check(paying,i, pay1);
 	if(checking==1){
	 paying[k]=pay1;
	 k++;
}
 }
 	/*
 	for(i=0;i<n;i++){
 		
 		if(pay[i]==)
	 }
	 */
	 	for(i=0;i<k;i++){
	 		
	 		printf("%d\n", paying[i]);
		 }
 }
 
 int check(int* array, int i,int input){
int count ;
count =0;
int j;
for(j=0;j<i;j++){
 	if(*(array+j)==input)
 	count++;
 }
 if(count==0)
 return 1;
 else 
 return 0;
 
 
 }
