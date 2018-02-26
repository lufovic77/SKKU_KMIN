#include <iostream>
using namespace std;

class selfRef{
	private:
		int num;
	public:
		selfRef(int n):num(n){	//constructor with initializer
			cout<<"object generation"<<endl;
		}
		selfRef& Adder(int n){	//return type is the reference of class(object). ��������.  
			num+=n;
			return *this;	//'this' is a pointer. '*this' means the object itself.
		}
		selfRef& showTwoNumber(){
			cout<<num<<endl;
			return *this;
		}
};
int main(){
	selfRef obj(3);
	selfRef &ref=obj;	//������ ���� (reference declaration)
	
	obj.showTwoNumber();
	ref.showTwoNumber();
	
	ref.Adder(1).showTwoNumber().Adder(2).showTwoNumber();
	return 0;
}

