#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class boy{
	private:
		int height;
		friend class girl;	//'friend' declaration enable the external approach of private member variable.
	public:
		boy(int len):height(len){
			//cout<<girl.phNum<<endl; is impossible. 
		}
		
};
class girl{
	private:
		char *phNum=new char[20];
	public:
		girl(char *num){
			strcpy(phNum, num);
		}
		void showYourFriendInfo(boy &frn){
			cout<<"His height: "<<frn.height<<endl;	//Even 'height' is a private variable, class girl can approach.
			cout<<"My name: "<<phNum<<endl;
		}
};
/*
One class can declare 
1. Ohter class
2. Function in other class
3. Global function
as a friend. 
But it does not guarantee the 'two-way' approach. 
However, friend declaration is not recommended because it ruins the information hiding. 
*/
int main(){
	boy obj1(179);
	girl obj2("Hye Soo");
	obj2.showYourFriendInfo(obj1);
}
