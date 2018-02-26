#include <iostream>
#include <cstdio>	//omit '.h' and use 'c' as a prefix. 
					//Almost header files in C are also available in C++.
using namespace std;
class test{
	private:
		int gaein=0;
	public:
		int gongyong;
		void external();
};
void test::external(){	//private의 경우 같은 클래스 내부에서의 접근은 가능 
						//private member variable only permit internal approaches.
	cout<<gaein<<endl;
	gaein=20;
	cout<<gaein<<endl;
}
test TEST;

int main(){
	TEST.gongyong=30;	//public member permits external approaches.
	cout<<TEST.gongyong<<endl;
	TEST.external();
}
