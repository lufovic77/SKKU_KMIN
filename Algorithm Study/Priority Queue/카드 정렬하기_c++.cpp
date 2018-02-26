#include <stdio.h>
#include <cstdio>
#include <queue>
using namespace std;

priority_queue<int ,vector<int>,greater<int> > minpq;

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++){
		int a;
		scanf("%d", &a);
		minpq.push(a);
	}
	int sum=0;
	int push;
	while(minpq.size()!=1){
		int c,d;
		if(minpq.size()==1)
		break;
		c=minpq.top();
		minpq.pop();
		d=minpq.top();
		minpq.pop();
		sum+=(c+d);
		push=c+d;
		minpq.push(push);
	}
	printf("%d", sum);
}
