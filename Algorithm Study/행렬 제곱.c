#include <stdio.h>
#include <memory.h>
unsigned long long array[40];
unsigned long long calMat[40]; 
unsigned long long N;
unsigned long long newMat[40];

unsigned long long* multiple(unsigned long long* mat1,unsigned long long* mat2){
memset(newMat,0,160);
 	int a=0,b=0,c=0,d=0,e=0,f=0;
 	int i,j;
	for(i=0;i<N*N;i++){
	
		if(i>=0 && i<N){			a=i%N;
			for(j=0;j<N;j++){
				newMat[i]+=(mat1[j]*mat2[a])%1000;
				a+=N;
			}
		}	
		else if(i>=N && i<2*N){		b=i%N;
			for(j=N;j<2*N;j++){
				newMat[i]+=(mat1[j]*mat2[b])%1000;
				b+=N;
			}
			
		}
		else if(i>=2*N && i<3*N){	c=i%N;
			for(j=2*N;j<3*N;j++){
				newMat[i]+=(mat1[j]*mat2[c])%1000;
				c+=N;
			}
			
		}
		else if(i>=3*N && i<4*N){	d=i%N;
			for(j=3*N;j<4*N;j++){
				newMat[i]+=(mat1[j]*mat2[d])%1000;
				d+=N;
			}
			
		}
		else if(i>=4*N && i<5*N){	e=i%N;
			for(j=4*N;j<5*N;j++){	
				newMat[i]+=(mat1[j]*mat2[e])%1000;
				e+=N;
			}
			
		}
		unsigned long long temp=newMat[i];
		newMat[i]=temp%1000;
	}
 	for(i=0;i<N*N;i++)
 	calMat[i]=newMat[i];
	
	printf("\n----------------\n");
	for(i=0;i<N*N;i++){
		printf("%llu ",calMat[i]);
		if((i+1)%N==0)
		printf("\n");
	}
	printf("\n----------------\n");
	
	return calMat;	
}
unsigned long long* square(unsigned  long long n){
/*		if(n==0)
	return 1;
	if(n%2==1)
	return x*exponential(x,n-1)%divisor;
	else{
		unsigned long long half=exponential(x,n/2);
		return half*half%divisor;
	}
	}*/
	printf("\nsdkjf\n");
	if(n==1)
	return array;
	if(n%2==1)
	return multiple(array,square(n-1));
	else{
		unsigned long long * half=square(n/2);
		unsigned long long * mat=multiple(half,half);
		return mat;
	}
	
}
int main(){
	unsigned long long B;
	scanf("%llu %llu", &N, &B);
	unsigned long long* answer;
//	answer=
int i;
		for(i=0;i<N*N;i++)
		scanf("%llu", array+i);
		answer=square(B);
		for(i=0;i<N*N;i++){
		printf("%llu ", answer[i]);
		if((i+1)%N==0)
		printf("\n");
	}
}
