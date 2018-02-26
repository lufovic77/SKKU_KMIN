#include <cstdio>
#include <queue>
using namespace std;

priority_queue<int> maxheap;
priority_queue<int,vector<int>,greater<int> > minheap;

int number[10000];
int main(){
	int T;
	scanf("%d", &T);
	int i,j;
	int M;
	int check;
	int mid;
	for(i=0;i<T;i++){
		scanf("%d", &M);
		check=1;
		printf("%d\n", (M+1)/2);
		for(j=0;j<M;j++){
			int a;
			scanf(" %d",&a);
			if(j==0){
				mid=a;
				printf("%d ", mid);
				continue;
			}
			if(check%2==1){
				if(a>mid){
					minheap.push(a);
					maxheap.push(mid);
				}
				else{
					minheap.push(mid);
					maxheap.push(a);
				}
			}
			else{
				if(a>minheap.top()){
					mid=minheap.top();
					minheap.pop();
					minheap.push(a);
				}
				else if(a>maxheap.top()){
					mid=a;
				}
				else{
					mid=maxheap.top();
					maxheap.pop();
					maxheap.push(a);
				}
				printf("%d ",mid);
			}
			if(check==19)
			printf("\n");
			check++;
		}
			while(!minheap.empty())
			minheap.pop();
			while(!maxheap.empty())
			maxheap.pop();
			printf("\n");
	}
}

