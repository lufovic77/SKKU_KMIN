#include <iostream>
using namespace std;
class soSimple{
	private: 
		int num;
	public:
		soSimple(int n): num(n){
		}
		soSimple& addNum(int n ){
			num+=n;
			return *this;
		}
		void showData() const{
			cout<<"num :"<<num<<endl;
		}
		void simpleFunc(){
			cout<<"SimpleFunc: "<<num<<endl;
		}
		void simpleFunc() const{	//const function
			cout<<"const simpleFunc: "<<num<<endl;
		}
		/*
		Function overloading condition:
		#1 
		Different number of arguments
		#2
		Differnt returning type
		#3
		Const or not
		*/
};
void yourFunc(const soSimple &obj){
	obj.simpleFunc();
}
int main(){
	const soSimple obj(7);//Can only call const function.
	//obj.addNum(300); :Impossible. 
	obj.showData();
	
	soSimple obj1(2);
	const soSimple obj2(7);
	/*
	Const object automatically call const function.
	Non-const object automatically call non-const function(of course it can call both of them)
	*/
	obj1.simpleFunc();
	obj2.simpleFunc();
	
	yourFunc(obj1);
	yourFunc(obj2);
	/*
	Whether it is a const object or not, it doesn't care. 
	*/
	return 0;	
	
}
