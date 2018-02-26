#include <stdio.h>
	 long long array[4]={1,1,1,0};
long long calMat[4];
	long long basic[4]={1,0,0,1};
 long long* multiple(long long* mat1,long long* mat2){
 long long newMat[4];
	newMat[0] = (mat1[0] * mat2[0] + mat1[1] * mat2[2])%1000000;
    newMat[1] = (mat1[0] * mat2[1] + mat1[1] * mat2[3])%1000000;
    newMat[2] = (mat1[2] * mat2[0] + mat1[3] * mat2[2])%1000000;
    newMat[3] = (mat1[2] * mat2[1] + mat1[3] * mat2[3])%1000000;
	
	for(int i=0;i<4;i++)
	calMat[i]=newMat[i];
	
	
	return calMat;	
}
long long* square(  long long n){
/*		if(n==0)
	return 1;
	if(n%2==1)
	return x*exponential(x,n-1)%divisor;
	else{
		unsigned long long half=exponential(x,n/2);
		return half*half%divisor;
	}
	}*/
	if(n==1)
	return array;
	if(n%2==1)
	return multiple(array,square(n-1));
	else{
		long long * half=square(n/2);
		long long * mat=multiple(half,half);
		return mat;
	}
	
	
}
int main(){
	long long n;
	scanf("%lld", &n);
	long long* answer;
	if(n==0){
		printf("0");
		return 0;
	}

	
//	answer=
	answer=square(n);for(int i=0;i<4;i++){
		printf("%lld ", answer[i]);
		if((i+1)%2==0)
		printf("\n");
	}
}
