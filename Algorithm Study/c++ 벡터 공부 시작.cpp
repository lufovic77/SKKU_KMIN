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
		printf("%d ��° ����� Ű%d, ������=\n",i+1,nodes[i].key );
	}
}

int main(){
	vector<node> nodes;
	printf("������ ����");
	node temp;
	temp.key=1;
	temp.data="HELLO WORLD!";
	nodes.push_back(temp);
	
	show(nodes);
}
