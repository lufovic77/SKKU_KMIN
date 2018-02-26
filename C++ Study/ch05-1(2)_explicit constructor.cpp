#include <iostream>
using namespace std;
class soSimple{
	private:
		int num1;
		int num2;
	public:
		soSimple(int n1, int n2): num1(n1), num2(n2){
			//empty
		}
		explicit soSimple(const soSimple &ref): num1(ref.num1), num2(ref.num2){
			cout<<"explicit constructor"<<endl;
		}
		void showData();
};
void soSimple::showData(){
	cout<<num1<<endl<<num2<<endl;
}
int main(){
	soSimple sim1(10, 20);
	sim1.showData();
	//soSimple sim2=sim1;	Impossible when contructor is declared as 'explicit'
	soSimple sim2(sim1);	//Only permitable when explicit.
}
