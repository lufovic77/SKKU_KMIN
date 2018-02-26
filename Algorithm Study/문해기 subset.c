#include <stdio.h>
int finished=0;
int numbers[20];

void construct_candidates(int a[],int k,int n,int c[],int *ncandidates){
	c[0]=1;
	c[1]=0;
	*ncandidates=2;
}
void process_solution(int a[],int k){
	int i;
	printf("{");
	for(i=1;i<=k;i++)
	if(a[i]==1)
	printf(" %d", i);
	printf(" }\n");
}

int is_a_solution(int a[],int k,int n){
	return (k==n);
}

void backtrack(int a[],int k,int n) {
	int c[20];		//candidates
	int ncandidates;
	int i;
	if(is_a_solution(a,k,n))
		process_solution(a,k);
	else {	
		construct_candidates(a,k,n,c,&ncandidates);
		for(i=0; i<ncandidates; i++) {
			a[k] = c[i];
			backtrack(a,k,n);
			if(finished)
				return;
		}
		k++;
	}
}
void generate_subsets(int n){
	int a[20];
	backtrack(a,0,n);
}

int main(){
	int N,S;
	scanf("%d%d", &N,&S);
	int i;
	for(i=0;i<N;i++)
	scanf("%d", numbers+i);
	generate_subsets(N);
}
