#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

typedef struct node{
	int key;
	string data;
}node; 

void show(vector<node>nodes){
	for(int i=0;i<nodes.size();i++){
		printf("%d 번째 노드의 키%d, 데이터=\n",i+1,nodes[i].key );
	}
}

int main(){
	vector<node> nodes;
	printf("데이터 삽입");
	node temp;
	temp.key=1;
	temp.data="HELLO WORLD!";
	nodes.push_back(temp);
	
	show(nodes);
}
