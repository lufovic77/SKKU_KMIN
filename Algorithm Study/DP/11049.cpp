#include <iostream>
#include <limits.h>
using namespace std;
int cache[510][510];
int dp(int* p, int i, int j){
	int &ret=cache[i][j];
	int k,q;
	if(ret<INT_MAX)
	return ret;
	if(i==j)
	return ret=0;
	else{
		for(k=i;k<j;k++){
		q=dp(p,i,k)+dp(p,k+1,j)+p[i-1]*p[k]*p[j];
		if(q<ret)
		ret=q;
		}
	}
	return ret;
}
int main(){
	int N;
	cin>>N;
	int i,j;
	int p[510];
	int a,b;
	for(i=0;i<N;i++){
		cin>>a>>b;
		p[i]=a;
	}
	p[N]=b;
	for(i=0;i<510;i++){
		for(j=0;j<510;j++)
		cache[i][j]=INT_MAX;
	}
	int answer=dp(p,1,N);
	cout<<answer;
}
