#include <iostream>
using namespace std;

class Point{
	public:	//information hiding failed.(should be private)
		int x;
		int y;
};
class Rectangle{
	public:
		Point upLeft;	//객체가 멤버 변수로 올 수 있다.  
		Point lowRight;	//instance can be declared as a member variable.
	public:		 
		void ShowRecInfo(){
			cout<<"left up: "<<'['<<upLeft.x<<", ";
			cout<<upLeft.y<<']'<<endl;
			cout<<"right low: "<<'['<<lowRight.x<<", ";
			cout<<lowRight.y<<']'<<endl;
		}
};
int main(){
	Point pos1={-2,4}; //init members. 
	Point pos2={5, 9};
	Rectangle rec = {pos2, pos1}; //Awkward. Instance of class can be members of other class.(copying) 
	
	rec.ShowRecInfo();
	return 0;	
}
