#include <iostream>
using namespace std;
class Point{
	private:
		int x;
		int y;
	public:
		Point (const int &xpos, const int &ypos); //const + reference: variable and constant can be passed. 
		int getX() const;
		int getY() const;
		bool setX(int xpos);
		bool setY(int ypos);
};
Point::Point(const int &xpos, const int &ypos){
	x=xpos;
	y=ypos;
}
class Rectangle{
	private:
		Point upLeft;
		Point lowRight;
	public:
		Rectangle(const int &x1,const int &y1,const int &x2,const int &y2);
		void showRecInfo() const; 
		~Rectangle(){	//destructor
			cout<<"done!"<<endl;
		}
	
};

Rectangle::Rectangle(const int &x1,const int &y1,const int &x2,const int &y2):upLeft{1,1}, lowRight{2,2}{//initializer places on function definition(not declaration)
	cout<<"start!"<<endl;
}
int main(){
	//Rectangle doub(1,2,3,4);	//ERROR. Class Rectangle has instance members. 
								//When we declare Rectangle doub(1,2,3,4), compiler make a default constructor
								//for Point class. There already exists constructor, so we can't insert a default constructor. 
								//This is why we need an 'initializer'. 
	Rectangle doub(1,2,3,4);
}
