#include <iostream>
using namespace std;

class soSimple{
	private:
		int num1;
		mutable int num3;
	public:
		const static int KOREA=9922;
		/*
		If only declared as 'static', declaring and initializing at the same time is not allowed.
		'const' makes it enable.
		*/
		static int num2;
		soSimple(int n):num1(n){	
		}
		static void Adder(int n){
			//num1+=n;	ERROR
			/*
			static function can't access to the member variable because it is outside of the class.
			*/
			num2+=n;
		}
		void copyToNum() const{
			num2=num1;
			/*
			const function can't change the value of variable. 
			'mutable' makes it possible. 
			*/
		}
};
int soSimple::num2=0;
int main(){
	soSimple obj(1);
	obj.copyToNum();
	obj.Adder(10);
	cout<<soSimple::num2;	//ㅇㅅㅇ 클래스 밖의 변수기는 해도 :: 이거는 해야하네 
	 
}
