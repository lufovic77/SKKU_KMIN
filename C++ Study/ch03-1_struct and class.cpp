#include <cstdio>
#include <iostream>
using namespace std;

namespace what{
	int fuxk=100;
}
struct Car{ //c++������ ����ü�� �׳� class�� �����ص� �ȴ�.  
			//Struct in C++ is almost same as Class.
	int fuelGauge;
	int speed;
	
	void showSpeed();	//Just declaration
	void showFuel();
};

void Car::showFuel(){//struct Car�� �Լ��� ������. �׷��� Car:: �� ���־�� �Ѵ�.  
					 //extract function in Car struct. 
	cout<<fuelGauge<<endl;
}

void Car::showSpeed(){
	cout<<speed<<endl;
}

Car basic; 	//c++������ ������ struct ǥ�þ��� �׳� �̸��� �ᵵ ����. �׷��� typedef�� �Ⱦ���.
			//C++ dosen't need 'typedef'. 

int main(){
	basic.fuelGauge=30;
	basic.showFuel();
	cout<<what::fuxk<<endl;
//	cout<<Car.hello<<endl;
}
