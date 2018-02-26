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
		scanf("%s", array[i]);		//이거 문자열 입력받는거 오졋다~ 
		while(array[i][index]!='\0' && count>=0){
			if(array[i][index]=='(')
			count++;
			else
			count--;				//믿기 힘들겠지만 스택임 ..ㅋ 
	//	printf("count:%d\n", count);
			index++;
		}
		if(count==0)
		printf("YES\n");
		else 
		printf("NO\n");
	}
}
