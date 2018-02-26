#include <iostream>
using namespace std;
class soSimple{
	private:
		int num1;
		int num2;
	public:
		soSimple(const soSimple&ref):num1(ref.num1), num2(ref.num2){
			//this is what default copy constructor do.
			cout<<"default copy constructor"<<endl;
		}
		soSimple(int n1, int n2): num1(n1), num2(n2){
		}
		void showSimpleData(){
			cout<<num1<<endl;
			cout<<num2<<endl;
		}
};

int main(){
	//int num=20; is same as 
	//int num(20); in C++
	soSimple sim1(15,20);
	soSimple sim2=sim1; 
	/*
	Converted to 'soSimple sim2(sim1);' implicitly.
	It needs a constructor named
	soSimple (const soSimple &ref) {} maybe.  
	If not declared, complier insert this automatically. 
	*/
	sim2.showSimpleData();
	return 0;	
}
