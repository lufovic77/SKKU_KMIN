#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	int i,index=0;
	int count=0;
	char array[1000][51];
	for(i=0;i<T;i++){
		index=0;
		count=0;
		scanf("%s", array[i]);		//�̰� ���ڿ� �Է¹޴°� ������~ 
		while(array[i][index]!='\0' && count>=0){
			if(array[i][index]=='(')
			count++;
			else
			count--;				//�ϱ� ��������� ������ ..�� 
	//	printf("count:%d\n", count);
			index++;
		}
		if(count==0)
		printf("YES\n");
		else 
		printf("NO\n");
	}
}
