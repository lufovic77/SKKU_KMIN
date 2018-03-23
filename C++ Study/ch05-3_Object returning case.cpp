#include <iostream>
using namespace std;
class soSimple{
	private:
		int num;
	public:
		soSimple(int n):num(n){
			
		}
		soSimple(const soSimple &copy):num(copy.num){
			cout<<"Calling copy constructor"<<endl;
		}
		soSimple& addNum(int n){
			num+=n;
			return *this;	//Returning this object. Make another object on memory space. 
		}
		void showData();
};
void soSimple::showData(){
	cout<<"num: "<<num<<endl;
}
soSimple simpleFuncObj(soSimple ob){
	cout<<"return ??"<<endl;
	return ob;
}
int main(){
	soSimple obj(7);
	simpleFuncObj(obj).addNum(30).showData();
	/*
	We can see a new object is generated when simpleFuncObj(obj) is called. 
	This new object and original object obj are seperated. 
	*/
	obj.showData();
	return 0;
}
