#include <stdio.h>
int finished=0;
int numbers[30];
int count=0;
int S;
void construct_candidates(int a[],int k,int n,int c[],int *ncandidates){
	c[0]=1;
	c[1]=0;
	*ncandidates=2;
}
void process_solution(int a[],int k){
	int i;
	int sum=0;
	int check=0;
	for(i=1;i<=k;i++){
		if(a[i]==1){
			sum+=numbers[i];
			check=1;
		}
	}
	
	if(sum==S && check==1)
	count++;
	return ;
}

int is_a_solution(int a[],int k,int n){
//	finished=1;
	return (k==n);
}

void backtrack(int a[],int k,int n) {
	if(k>n)
	return ;
//	printf("?");
	int c[2];		//candidates
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
void generate_subsets(int n){
	int a[30];
	backtrack(a,0,n);
}

int main(){
	int N;
	scanf("%d", &N);
	int i;
	generate_subsets(N);
	printf("%d", count);
}
