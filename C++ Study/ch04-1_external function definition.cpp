#include <cstdio>
#include <iostream>
using namespace std;

class Point{
	public:
		int x;
		int y;
};
class Rectangle{
	public:
		Point upLeft;
		Point lowRight;
	
	public:
		void showRecInfo();
};

void Rectangle:: showRecInfo(){
	cout<<"upper left: "<<'['<<upLeft.x<<", ";
	cout<<upLeft.y<<']'<<endl;
	cout<<"low right: "<<'['<<lowRight.x<<", ";
	cout<<lowRight.y<<']'<<endl<<endl;
}

int main(){
	Point pos1={-2,4}; //구조체 선언 
	Point pos2={5,9};
	Rectangle rec={pos2, pos1}; 
	rec.showRecInfo();
	return 0; 
}
