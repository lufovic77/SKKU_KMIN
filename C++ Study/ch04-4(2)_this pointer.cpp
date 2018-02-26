#include <iostream>
using namespace std;

class twoNumber{
	private:
		int num1;
		int num2;
	public:
		twoNumber(int num1, int num2){
			this->num1=num1;	//left handside means the private num1 of this class. Right handside means the argument of this constructor.
			this->num2=num2;
		}
		/*<Same meaning using the initializer>
		twoNumber(int num1, int num2): num1(num1), num2(num2){
			//empty
		}
		*/
		int showNum();
};
int twoNumber::showNum(){
	cout<<num1<<endl<<num2<<endl;
}
int main(){
	twoNumber obj(1,2);
	obj.showNum();
}
