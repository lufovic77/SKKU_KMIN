#include <cstdio>
#include <iostream>
#include <queue>
#include <ctime>
#include <cstdlib>
using namespace std;

priority_queue<int,vector<int>, greater<int> >pq;

int main(){
	srand(time(NULL));
	for(int i=0;i<10;i++){
		pq.push(rand()%100);
	}
	while(!pq.empty()){
		cout<<pq.top()<<endl;
		pq.pop();
	}
}
