#include <stdio.h>
#include <math.h>
int main(){
int num;
scanf("%d", &num);
int result;
int aremain, bremain;
int i=0;
int a,b;
int * array = (int*)malloc(sizeof(int)*num);
while(i!=num){
	scanf("%d%d", &a,&b);
	aremain=a%10;
if(aremain==0)
array[i]=10;
else if (aremain==1)
array[i]=1;
else if (aremain==5)
array[i]=5;
else if (aremain==6)
array[i]=6;
else if (aremain==2){
	bremain=b%4;
	switch(bremain){
	case 1:
		array[i]=2;
		break;
	case 2:
		array[i]=4;
		break;
	case 3:
		array[i]=8;
		break;
	default:
		array[i]=6;
		break;			
	}
}
else if (aremain==7){
		bremain=b%4;
			switch(bremain){
	case 1:
		array[i]=7;
		break;
	case 2:
		array[i]=9;
		break;
	case 3:
		array[i]=3;
		break;
	default:
		array[i]=1;
		break;	
	}
}
else if (aremain==8){
		bremain=b%4;
			switch(bremain){
	case 1:
		array[i]=8;
		break;
	case 2:
		array[i]=4;
		break;
	case 3:
		array[i]=2;
		break;
	default:
		array[i]=6;
		break;	
	}
}
else if (aremain==3){
		bremain=b%4;
			switch(bremain){
	case 1:
		array[i]=3;
		break;
	case 2:
		array[i]=9;
		break;
	case 3:
		array[i]=7;
		break;
	default:
		array[i]=1;
		break;			
	}
}
else if (aremain==9){
		bremain=b%2;
			switch(bremain){
			
	case 1:
		array[i]=9;
		break;
	default:
		array[i]=1;
		break;		
	}
}
else if (aremain==4){
		bremain=b%2;
			switch(bremain){
			
	case 1:
		array[i]=4;
		break;
	default:
		array[i]=6;
		break;	
	}
}



	i++;
}
for(i=0;i<num;i++){

printf("%d", array[i]);
if(i==num-1)
break;
printf("\n");
}
} 
