#include <stdio.h>
int N;
char array[60][60];
int rowsearch(int row){
	int i,j;
	i=row;
	j=0;
	int max=1;
	int count=1;
	while(j<N){
		count=1;
		if(array[i][j]==array[i][j+1]){
			while(array[i][j]==array[i][j+1]){
				count++;
				j++;
			}
		}
		else
		j++;

		if(max<count)
			max=count;
	}
	return max;
}
int colsearch(int col){	
	int i,j;
	j=col;
	i=0;
	int max=1;
	int count=1;
	while(i<N){
		count=1;
		if(array[i][j]==array[i+1][j]){
			while(array[i][j]==array[i+1][j]){
				count++;
				i++;
			}
		}
		else
		i++;
		if(max<count)
			max=count;
	}
	return max;
}
int main(){
	scanf("%d", &N);
	int i,j;
	for(i=0;i<N;i++)
		scanf("%s", &array[i]);
	char temp;
	int ans1,ans2,ans;
	int max=0;
	int m,n;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){/*
		for(m=0;m<N;m++){
			puts(array[m]);
		}
		*/
			if(i-1>=0){
				temp=array[i][j];
				array[i][j]=array[i-1][j];
				array[i-1][j]=temp;
				ans=rowsearch(i);
				if(max<ans)
				max=ans;
				ans1=rowsearch(i-1);
				if(max<ans1)
				max=ans1;
				ans2=colsearch(j);
				if(max<ans2)
				max=ans2;

				temp=array[i-1][j];
				array[i-1][j]=array[i][j];
				array[i][j]=temp;
			}//max 처리 해주 
				if(j+1<N){
				temp=array[i][j];
				array[i][j]=array[i][j+1];
				array[i][j+1]=temp;
				ans=rowsearch(i);
				if(max<ans)
				max=ans;
				ans1=colsearch(j+1);
				if(max<ans1)
				max=ans1;
				ans2=colsearch(j);
				if(max<ans2)
				max=ans2;

				temp=array[i][j+1];
				array[i][j+1]=array[i][j];
				array[i][j]=temp;
			}
				if(i+1<N){
				temp=array[i][j];
				array[i][j]=array[i+1][j];
				array[i+1][j]=temp;
				ans=rowsearch(i);
				if(max<ans)
				max=ans;
				ans1=rowsearch(i+1);
				if(max<ans1)
				max=ans1;
				ans2=colsearch(j);
				if(max<ans2)
				max=ans2;

				temp=array[i+1][j];
				array[i+1][j]=array[i][j];
				array[i][j]=temp;
			}
				if(j-1>=0){
				temp=array[i][j];
				array[i][j]=array[i][j-1];
				array[i][j-1]=temp;
				ans=rowsearch(i);
				if(max<ans)
				max=ans;
				ans1=colsearch(j-1);
			//	printf("i:%d j:%d ans1:%d\n", i,j,ans1);
				if(max<ans1)
				max=ans1;
				ans2=colsearch(j);
				if(max<ans2)
				max=ans2;

				temp=array[i][j-1];
				array[i][j-1]=array[i][j];
				array[i][j]=temp;
			}
		}
	}
	
	printf("%d", max);
}
