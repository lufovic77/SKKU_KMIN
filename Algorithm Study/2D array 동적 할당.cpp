#include <stdio.h>
#include <stdlib.h>
int main(){
	int ** array;
	int N; // size of the array
	array=(int**)malloc(sizeof(int*)*100);//row 100�� �Ҵ� 
	int i,j; 
	//���� �� row ���� column���� �Ҵ����ִ� �۾��� �ʿ�
	for(i=0;i<100;i++)
	array[i]=(int*)malloc(sizeof(int)*10);//column 10�� �Ҵ� (array[i]�� �ٽ�-> �̰� �ּҰ��̿���~) 
	
	array[0][0]=1;
	array[98][9]=999;
	for(i=0;i<100;i++){
		for(j=0;j<10;j++){
			printf("%d ", array[i][j]);	
		} 
	}
	
	for(i=0;i<100;i++)
	free(array[i]);		//free ���� �� row ���� Ǯ���ְ� �������� Ǯ������� 
						//�� �� �̰͵� array[i]���� ������. �ּڰ� �ƴϿ��� ;;;�� ��� �迭�� �̸��� �����ּҴϱ� �ּҰ��³� ���� 
		printf("\n");printf("???????????"); 
	free(array);
}
