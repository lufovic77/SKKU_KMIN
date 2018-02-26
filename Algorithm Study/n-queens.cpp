#include <stdio.h>
#include <math.h>
int finished=0;

int solution_count=0;

void process_solution(int a[],int k){
	solution_count++;
}

int is_a_solution(int a[],int k,int n){
	return (k==n);
}
void construct_candidates(int a[],int k,int n,int c[],int *ncandidates){
	int i,j;
	bool legal_move;
	
	*ncandidates=0;
	
	for(i=1;i<=n;i++){
		legal_move=true;
		for(j=1;j<k;j++){
			if(abs(k-j)==abs(i-a[j]))
			legal_move=false;
			if(i==a[j])
			legal_move=false;
		}
		if(legal_move==true){
			c[*ncandidates]=i;
			*ncandidates=*ncandidates+1;
		}
	}
}


void backtrack(int a[],int k,int n) {
	if(k>n)
	return ;
	int c[100];		//candidates
	int ncandidates;
	int i;
	if(is_a_solution(a,k,n))
		process_solution(a,k);
	else {
		k++;	
		construct_candidates(a,k,n,c,&ncandidates);
		for(i=0; i<ncandidates; i++) {
			a[k] = c[i];
			backtrack(a,k,n);
			if(finished)
				return;
		}
	}
}
void nqueens(int n){
	int a[100];
	
	solution_count=0;
	backtrack(a,0,n);
	printf("n=%d, solution_count=%d\n", n,solution_count);
}

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i=1;i<=n;i++){
		nqueens(i);
	}
}
