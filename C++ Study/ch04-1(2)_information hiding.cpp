#include <iostream>
using namespace std;

class Point{
	private:	//To enable information hiding. (정보은닉) 
		int x;
		int y;
	public:
		void InitMembers(int xpos, int ypos);	//function declaration
		bool setX(int xpos); //access functions are added due to information hiding. 
		bool setY(int ypos); //access functions are added due to information hiding. 
		int getX();
		int getY();
		
		
		//int getX() const;	//const: means this function can't change the value of member variabes. 
		//int getY() const;	//function declared as 'const' can't call 'non-const' function to prevent the risk of changing value.
							
};

int Point::getX(){
	cout<<"xpos:: "<<x<<endl;
}
int Point::getY(){
	cout<<"ypos:: "<<y<<endl;
}
bool Point::setX(int xpos){
	if(0>xpos||xpos>100){
		cout<<"error"<<endl;
		return false;
	}
	x=xpos;	//Point 클래스의 private멤버변수인 int x, int y에 접근할 수 있는 유일한 방법. 
			//Only way to approach private member variable in Point class.
	return true;
}

bool Point::setY(int ypos){
	if(0>ypos||ypos>100){
		cout<<"error"<<endl;
		return false;
	}
	y=ypos;	//Point 클래스의 private멤버변수인 int x, int y에 접근할 수 있는 유일한 방법. 
			//Only way to approach private member variable in Point class.
	return true;
}

void Point::InitMembers(int xpos, int ypos){
	x=xpos;
	y=ypos;
}

Point init;	//continuous mistake. Treat it as a structure(Should be declared first).

int main(){	//원래 main에서는 접근 못함. 함수를 통해서 접근 가능.  
			//cannot approach externally. Should use declard function. 
	init.InitMembers(0,0);
	cout<<"enter xpos and ypos: " <<endl;
	int x,y;
	cin>>x>>y;
	bool flag;
	flag=init.setX(x);
	cout<<"x: "<<flag<<endl;
	flag=init.setY(y);
	cout<<"y: "<<flag<<endl;
	
	x=init.getX();
	y=init.getY();
}
