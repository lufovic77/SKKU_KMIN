#include <iostream>
using namespace std;
class soSimple{
	private:
		int num;
	public:
		soSimple(int n): num(n){
			//empty
		}
		soSimple(const soSimple &copy): num(copy.num){	//copy constructor
			cout<<"Other case of calling copy constructor."<<endl;
			/*
			Before, we learned that we call a copy constructor when the object is 
			declared and initialized at the same time. 
			For example, 
			soSimple obj1(obj2);
			: we make a new object of obj1 and copy member variables with obj2. 
			Ohter cases of calling copy constructor include 
			#1 
			Passing an object as an argument.
			#2
			Returning an object. 
			*/
		}
		void showData(){
			cout<<"num: "<<num<<endl;
		}
};
void simpleFuncObj(soSimple ob){
	ob.showData();
}

int main(){
	soSimple obj(7);//object generating
	cout<<"Before function call"<<endl;
	simpleFuncObj(obj);	//When passing the object as an argument, new object is generated. Call copy constructor. 
	cout<<"After function call"<<endl;
	return 0;
}
