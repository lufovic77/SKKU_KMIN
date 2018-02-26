#include <iostream>
using namespace std;
class soSimple{
	private:
		int num;
	public:
		soSimple(int n): num(n){	//constructor with initializer
			cout<<"num= "<<num<<", ";
			cout<<"address= "<<this<<endl;	//'this' indicates the address of its class(pointer)
		}
		void showSimpleData(){
			cout<<num<<endl; //information hiding
		}
		soSimple * getThisPointer(){
			cout<<this->num<<endl;
			//cout<<this.num<<endl;	ERROR because 'this' is a pointer.
			
			return this;
		}
};
//ū �������� �˾���. ���� �Ҷ��� :: �� ����, ������ ����Ҷ��� . �̳� ->�� ����. 
//The main difference of declaration and using.
//Using: '.' or '->' differ by whether is's a pointer or not.
/*
ex) 
int main(){
	soSimple obj(100);
	obj.showSimpleData();	
}
*/
//Declaration: use :: to show class
/*
ex)
class soSimple{
	pubic:
		void hello();
}
void soSimple::hello(){	//to show void hello() function belongs to soSimple class.
	~~~statement~~~
}
*/

int main(){
	soSimple obj(100);	//��ü ���� 
	soSimple * ptr1= obj.getThisPointer();
	cout<<"external ptr1: "<<ptr1<<endl;
	ptr1->showSimpleData();
	
	soSimple obj2(200);
	soSimple * ptr2=obj2.getThisPointer();
	cout<<"external ptr2: "<<ptr2<<endl;
	ptr2->showSimpleData();
	
	return 0;
}
