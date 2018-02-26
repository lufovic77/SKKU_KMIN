#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int distance(int,int,int,int,int,int);

int main(){
	int t;
	int x1,y1,x2,y2;
	int r1,r2;
	
//	printf("t : ");
	scanf("%d", &t);
	
	int* array=(int*)malloc(sizeof(int)*t);
	
	int i;
	
	for(i=0;i<t;i++){
		
		scanf("%d%d%d%d%d%d", &x1,&y1,&r1,&x2,&y2,&r2);
		array[i]=distance(x1,y1,r1,x2,y2,r2);			
	}
	
	
	
	for(i=0;i<t;i++){
	
	printf("%d", array[i]);
	if(i!=(t-1))
	printf("\n");
	
	}
	free(array);
} 


int distance(int x1, int y1,int r1, int x2,int y2, int r2 ){
	
	int distancepower;
	
	distancepower=	pow((x1-x2), 2)+ pow((y1-y2),2);
	

	
	//printf("sqrt : %d\n", distance);
	 
	if(distancepower>pow(r1-r2,2) && distancepower <pow(r1+r2,2))
	return 2;
	else if(x1==x2 && y1==y2 && r1==r2)
	return -1;
	else if(pow(r1+r2,2)==distancepower || pow(r1-r2,2)==distancepower)
	return 1;
	else if(pow(r1+r2,2)<distancepower || pow(r1-r2,2)>distancepower)
	return 0;

	else 
	return 0;
	
	 
	
	
	
	
}
