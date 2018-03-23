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
class employeeHandler{
	private:
		Employee* empList[50];	/*It is an Employee pointer. It can point permanentWorker class 
								because there is an inheritance relationship.
								Of course, any other classes that inherits Employee class
								can be pointed by this pointer. 
								*/
		int empNum;
	public:
		employeeHandler():empNum(0){	//initializer
			cout<<"implemented"<<endl;
		}
		void addEmployee(Employee* emp){
			empList[empNum++]=emp;
			return ;
		}
		void showAllSalaryInfo() const{
			
			for(int i=0;i<empNum;i++)
				empList[i]->showYourName();
			/*	
			for(int i=0;i<empNum;i++)
				empList[i]->showYourName();
				
			ERROR. Pointer of object permanentWorker is passed, but we can't access to showYourName() function.
			The compiler understands that the class pointer is Employee, 
			not permanentWorker even the object passed is permanentWorker class. 
			
			Reason:
			The pointer Employee is the superclass. Not all objects can be permanentWorker. 
			It can be other objects that inherits the Employee class. 
			Therefore, it prohibits the access to permanentWorker's members. 
			*/
			
		}
		void showTotalSalary()const{
			int sum=0;
			cout<<"salary sum: "<<sum<<endl;
		}
		~employeeHandler(){
			for(int i=0;i<empNum;i++)
				delete empList[i];
		}
	
};
class permanenetWorker:public Employee{	//public inheritance. Almost same except private memebers. 
	private:
		int salary;
	public:
		permanenetWorker(char* name, int money):Employee(name), salary(money){
			
		}
		int getPay() const{
			return salary;
		}
		void showSalaryInfo()	const{
			showYourName();
			cout<<"salary: "<<getPay()<<endl<<endl;
		}
};
int main(){
	permanenetWorker obj1=permanenetWorker("kyungmin", 300);
	obj1.getPay();
	obj1.showSalaryInfo();
	employeeHandler admin=employeeHandler();
	admin.addEmployee(&obj1);
	
	admin.showAllSalaryInfo();
}
