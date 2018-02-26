#include <iostream>
#include <cstring>
using namespace std;
class Person{
	private:
		char *name;
		int age;
	public:
		Person (const Person  &ref):age(ref.age){	//for 'deep copy'.
			name=new char[strlen(ref.name)+1];
			strcpy(name, ref.name);
		}
		Person(char*myname, int myage){
			int len=strlen(myname)+1;
			name=new char[len];	//dynamic allocation length 'len'
			strcpy(name, myname);
			age=myage;
		}
		~Person(){
			delete []name;
			cout<<"destructor"<<endl;
		}
		void showPerson();
};
void Person::showPerson(){
	cout<<name<<endl;
}
int main(){
	Person man1("kyung min", 22);
	man1.showPerson();
	Person man2=man1;
	man2.showPerson();	
	/*
	Error because of the 'shallow copy' 
	To fix, we need another construtor who also allocate space for name. 
	*/
	return 0;
}
