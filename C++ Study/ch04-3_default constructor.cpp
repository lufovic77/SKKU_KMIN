#include <iostream>
#include <cstdlib>
using namespace std;

class simpleClass{
	private:	//information hiding
		int num;
	public:
		simpleClass(){
			
		}
		simpleClass(int n){	//constructor
			num=n;
		}
		int getNum(){	//only way to approach to private variable. 
			return num;
		}
		
};
int main(){
	//simpleClass null; //Shoud insert default constructor. When there exist other constructor
	
	simpleClass test(20);	//instance 
	int num=test.getNum();
	cout<<"num: "<<num<<endl;
	simpleClass *ptr= new simpleClass(30);	
	num=ptr->getNum();	//treat it as a structure. use -> symbol when it's a pointer. 
	cout<<"2nd num: "<<num<<endl;
}
