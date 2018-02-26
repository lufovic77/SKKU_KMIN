#include <iostream>
using namespace std;

class selfRef{
	private:
		int num;
	public:
		selfRef(int n):num(n){	//constructor with initializer
			cout<<"object generation"<<endl;
		}
		selfRef& Adder(int n){	//return type is the reference of class(object). 참조자임.  
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
	selfRef &ref=obj;	//참조자 선언 (reference declaration)
	
	obj.showTwoNumber();
	ref.showTwoNumber();
	
	ref.Adder(1).showTwoNumber().Adder(2).showTwoNumber();
	return 0;
}

