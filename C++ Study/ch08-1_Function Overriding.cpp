#include <iostream>
#include <cstring>
using namespace std;
class Employee{
	private:
		char name[100];
	public:
		Employee(char*name){
			strcpy(this->name,name);
		}
		void showYourName()const{
			cout<<"name: "<<name<<endl;
		}
};

class PermanentWorker:public Employee{
	private:
		int salary;
	public:
		PermanentWorker(char* name, int money):Employee(name), salary(money){
			
		}
		int GetPay() const{
			return salary;
		}
		void ShowSalaryInfo()	const{
			showYourName();
			cout<<"(from permanentworker class)salary: "<<GetPay()<<endl<<endl;
		}
};

class SalesWorker: public PermanentWorker{
	private:
		int salesResult;
		double bonusRatio;
	public:
		SalesWorker(char* name, int money, double ratio):PermanentWorker(name, money), salesResult(0), bonusRatio(ratio){
			
		}
		void AddSalesResult (int value){
			salesResult+=value;
		}
		int GetPay() const{
			return PermanentWorker::GetPay()+(int)(salesResult*bonusRatio);
			/*
			This part, calling GetPay() function is explicitly specified. 
			If not, the GetPay() function in subclass(SalesWorker) is called implicitly.
			*/
		}
		void ShowSalaryInfo()const{
			showYourName();
			cout<<"(from salesworker class)salary: "<<GetPay()<<endl<<endl;
		}
};
/*
Before, we treated the relationship of superclass and subclass.
Now, it's about the relationship between subclass and subclass.
Here, the function overriding issue happens. 
*/
int main(){
	SalesWorker obj1 = SalesWorker("kyung min", 500, 2.3);
	obj1.AddSalesResult(200);
	cout<<"pay:"<<obj1.GetPay()<<endl;
	obj1.ShowSalaryInfo();
}
