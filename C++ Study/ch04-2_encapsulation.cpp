#include <iostream>
using namespace std;
class sinivelCap{
	public:
		void Take() const{
			cout<<"good1!"<<endl;
		}
};
class sneezeCap{
	public:
		void Take() const{
			cout<<"good2!"<<endl;
		}
};
class snuffleCap{
	public:
		void Take() const{
			cout<<"good3!"<<endl;
		}
};

class PILL{
	private:
		sinivelCap sin;	//gather three classes. 
		sneezeCap sne;
		snuffleCap snu;
	public:
		void Take() const{
			sne.Take();
			sin.Take();
			snu.Take();
		}
};
//클래스 PILL은 캡술화가 잘 되었다고 볼 수 있다. PILL에서 TAKE함수 내의 순서가 바뀌더라도 클래스 coldPatient에서는 건들게 없음. 
//서로 영향이 없기 때문에 캡슐화가 잘 된거! 
//Encapsulation of class PILL is very well done. Whether the order of function calls in Take function changed, 
//nothing affects on the class coldPatient. No effects between two classes. 
class coldPatient{
	public: 
		void takePill(const PILL &cap) const{	
			cap.Take();	//cap: reference (참조자) 
		}
};
int main(){
	PILL pill;
	coldPatient cold;
	cold.takePill(pill);
}
