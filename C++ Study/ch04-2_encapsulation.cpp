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
//Ŭ���� PILL�� ĸ��ȭ�� �� �Ǿ��ٰ� �� �� �ִ�. PILL���� TAKE�Լ� ���� ������ �ٲ���� Ŭ���� coldPatient������ �ǵ�� ����. 
//���� ������ ���� ������ ĸ��ȭ�� �� �Ȱ�! 
//Encapsulation of class PILL is very well done. Whether the order of function calls in Take function changed, 
//nothing affects on the class coldPatient. No effects between two classes. 
class coldPatient{
	public: 
		void takePill(const PILL &cap) const{	
			cap.Take();	//cap: reference (������) 
		}
};
int main(){
	PILL pill;
	coldPatient cold;
	cold.takePill(pill);
}
