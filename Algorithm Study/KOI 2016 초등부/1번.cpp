#include <stdio.h>
#include <memory.h>
int student[2][8];
int main(){
	int n,k;
	scanf("%d%d", &n,&k);
	int i,j;
	memset(student,0,sizeof(student));
	for(i=0;i<n;i++){
		int a,b;
		scanf("%d%d", &a,&b);
		student[a][b]++;
	}
	int room=0;
	for(i=0;i<=1;i++){
		for(j=1;j<=6;j++){
			int num=student[i][j];
		//	printf("room:%d num:%d k:%d\n", room,num,k);
			if(num==0)
			continue;
			while(num>0){
				num=num-k;
				room++;	
			}
		}
	}
	printf("%d", room);
}
