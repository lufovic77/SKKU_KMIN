#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	float a=0.0000000000000004;
	//printf("%d\n",*a);
	int temp;
	memcpy(&temp,&a,4);
	printf("%x", temp);
	int i;
	int bit_sequence[32];
	for(i=0;i<32;i++)
	bit_sequence[i]=(temp & (1 << 31-i)) ? 1 : 0 ;
	
	int sign;		// zero or one
	int exp[8];		//8 or 11
	int frac[23];	//23 or 52
	
	printf("\n");
	sign=bit_sequence[0];
	for(i=1;i<=8;i++)
	exp[i-1]=bit_sequence[i];
	for(i=9;i<=32;i++)
	frac[i-9]=bit_sequence[i];
	/*
	for(i=0;i<8;i++)
	printf("%d", exp[i]);
	printf("\n");
	for(i=0;i<23;i++)
	printf("%d", frac[i]);
	*/
	int exp_value=0;
	int frac_value=0;
	for(i=0;i<8;i++)
	if(exp[i]==1)
	exp_value+=pow(2,7-i);	//can be 10-i
	for(i=0;i<23;i++)
	if(frac[i]==1)
	frac_value+=pow(2,22-i);
	
	
	int bias=127; //can be 1023
	
	int answer=0;
	
	int final[23];
	if(exp_value==0){		//Denormalized
		answer=0;
		printf("?")	;
	}
	else if(exp_value==255){		//Special value
	//	if(frac_)
	}
	else{			//Normalized
		final[0]=1;
		int e=exp_value-bias;
		printf("e:%d", e);	
		for(i=0;i<e;i++)
		final[i+1]=frac[i];
		for(i=0;i<e+1;i++)
		if(final[i]==1)
		answer+=pow(2,e-i);
	}
	
	if(sign==1)			//for negative value
	answer=-answer;
	printf("answer: %d", answer);
//	char hexa[20]=
}
