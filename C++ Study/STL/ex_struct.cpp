#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

struct iterative{
	int flag;	
	int val;
	int num;
		
	void increase();
	void showNum();
	void decrease();
};

void iterative::increase(){
	flag=1;
	num++;
	val++;
}
void iterative::decrease(){
	flag=0;
	num++;	
	val--;
}

iterative test={0,0,0};	//struct declare 

int main(){
	int i;
		srand(time(NULL));
	for(i=0;i<10;i++){
		int temp=rand()%2;
		if(temp==0){
			test.increase();
		}
		else{
			test.decrease();
		}
		cout<<"flag: "<<test.flag<<endl;
		cout<<"val: "<<test.val<<endl;
		cout<<"num: "<<test.num<<endl<<endl;
	}
	
}
