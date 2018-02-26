#include <cstdio>
#include <iostream>
using namespace std;

namespace what{
	int fuxk=100;
}
struct Car{ //c++에서의 구조체는 그냥 class로 생각해도 된다.  
			//Struct in C++ is almost same as Class.
	int fuelGauge;
	int speed;
	
	void showSpeed();	//Just declaration
	void showFuel();
};

void Car::showFuel(){//struct Car의 함수를 뺴낸거. 그래서 Car:: 를 써주어야 한다.  
					 //extract function in Car struct. 
	cout<<fuelGauge<<endl;
}

void Car::showSpeed(){
	cout<<speed<<endl;
}

Car basic; 	//c++에서는 별도의 struct 표시없이 그냥 이름만 써도 가능. 그래서 typedef를 안쓴다.
			//C++ dosen't need 'typedef'. 

int main(){
	basic.fuelGauge=30;
	basic.showFuel();
	cout<<what::fuxk<<endl;
//	cout<<Car.hello<<endl;
}
