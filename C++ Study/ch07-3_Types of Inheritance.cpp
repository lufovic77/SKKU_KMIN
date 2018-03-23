#include <iostream>
using namespace std;
class base{
	private:
		int num1;
	protected:
		int num2;
	public:
		base(int n1,int n2, int n3):num1(n1), num2(n2), num3(n3){
		}
		int num3;
		void showData();
};
void base::showData(){
	cout<<num1<<", "<<num2<<", "<<num3<<endl;
}

class derived : public base{
	/*<Three types of inheritance.>
	Note that subclass always can't access the private member of super class. 
	By code level, it is an external approach even it is a case of inheritance. 
	1. public 
	: public->public, protected->protected
	2. protected
	: public->protected, protected->protected
	3. private
	: public->private, protected->private 
	*/
	public:
		derived(int n1,int n2, int n3): base(n1,n2,n3){
		}
		void showBaseMember(){
			//cout<<num1; 	//ERROR. Accessing the private member from super class in sub class is impossible. 
			cout<<num2<<endl;	
			/*
			'protected' variable and 'private' variable are same except one difference. 
			subclass cannot access to the private variable of super class.
			However, subclass can access to protected variable. 
			*/
			cout<<num3<<endl;
		}
	
};
int main(){
	derived obj1(10,20,30);
	obj1.showBaseMember();
	obj1.showData();
	/*
	subclass can access the member function in super class!!
	*/
}
