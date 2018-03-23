#include <iostream>
using namespace std;
class temporary{
	private:
		int num;
	public:
		temporary(int n):num(n){
			cout<<"Create obj: "<<num<<endl;
		}
		~temporary (){
			cout<<"Destroy obj: "<<num<<endl;
		}
		void showTempInfo(){
			cout<<"My num is "<<num<<endl;
		}
};
int main(){
	temporary(100);
	/*
	This is a temporary object. 
	Only valid for one line. 
	After that line, it is been destroyed, calling destructor. 
	*/
	cout<<"************ after make!"<<endl;
	
	temporary(200).showTempInfo();
	cout<<"************ after make!"<<endl<<endl;
	const temporary &ref=temporary(300);
	/*
	As we've learned before, when declaring like
	const int& ref=3; 
	the constant '3' is not destroyed. 
	It is been placed somewhere in the memory space even after this line. 
	In the same way, the temporary object has been saved on memory space
	when declared as 'const' and 'reference'. 
	Therefore, the destructor is called when the main function ends. 	
	*/
	cout<<"************ end of main!"<<endl<<endl;
	
	return 0;
	
}
