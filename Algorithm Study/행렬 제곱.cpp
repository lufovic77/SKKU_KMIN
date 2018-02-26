#include <stdio.h>
int n;
int identity[6][6]=
{1,0,0,0,0,0,
 0,1,0,0,0,0,
 0,0,1,0,0,0,
 0,0,0,1,0,0,
 0,0,0,0,1,0,
 0,0,0,0,0,1};
/*
void matrix_multi(){
	
  int m p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
  
  m=n;
  
  
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
	
	
}
*/

int * square(int * matrix,int m){
	if(m==0)
	return identity[0];
	if(m%2==1) return matrix_multi(square(matrix[0],m-1),matrix[0]);
	
	int half[6][6];
	half[0]=square(matrix[0],m/2);
	return matrix_multi(half[0],half[0]);
}
int main(){
	scanf("%d%d", &n,&m); //n by n and number of multiplications
	
	int matrix[6][6];
	int i,k;
	for(i=0;i<n;i++){
		for(k=0;k<n;k++)
		scanf("%d", &matrix[i][k]);
	}
	square(matrix[0],m);
}
