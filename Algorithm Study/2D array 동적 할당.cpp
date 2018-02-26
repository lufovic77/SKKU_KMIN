#include <stdio.h>
#include <stdlib.h>
int main(){
	int ** array;
	int N; // size of the array
	array=(int**)malloc(sizeof(int*)*100);//row 100개 할당 
	int i,j; 
	//이제 각 row 마다 column들을 할당해주는 작업이 필요
	for(i=0;i<100;i++)
	array[i]=(int*)malloc(sizeof(int)*10);//column 10개 할당 (array[i]가 핵심-> 이거 주소값이에요~) 
	
	array[0][0]=1;
	array[98][9]=999;
	for(i=0;i<100;i++){
		for(j=0;j<10;j++){
			printf("%d ", array[i][j]);	
		} 
	}
	
	for(i=0;i<100;i++)
	free(array[i]);		//free 또한 각 row 마다 풀어주고 나머지를 풀어줘야함 
						//와 난 이것도 array[i]인지 몰랐네. 주솟값 아니엿나 ;;;아 븅신 배열의 이름은 시작주소니까 주소값맞네 ㅋㅋ 
		printf("\n");printf("???????????"); 
	free(array);
}
