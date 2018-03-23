#include <iostream>
#include <cstring>
using namespace std;
/*
	<Person>		<univStudent>
	상위		|	하위 
	base		\	derived
	super		|	sub
	parent		\	child
*/
class person{
	private:
		int age;
		char name[50];
	public:
		person(int myage, char* myname): age(myage){
			strcpy(name, myname);
		}
		void whatYourName() const{
			cout<<"My name is "<<name<<endl;
		}
		void howOldAreYou() const{
			cout<<"I'm "<<age<<" years old"<<endl;
		}
		~person(){
			cout<<"person ends"<<endl;
		}
};
class univStudent : public person{	//Way to inherit class
	private:
		char major[50];
	public:
		univStudent(char * myname, int myage, char* mymajor) :person(myage, myname){
		/*
		sub class should call the constructor of super class.
		It calls by using a methods like initializer. 
		*/
			strcpy(major, myname);
		}
		void whoAreYou() const{
			whatYourName();
			howOldAreYou();
			/*
			Those two functions above are not declared in this class.
			We can use them because they are declared in super class. 
			However, we can't approach to the private variable. 	
			*/
		}
		~univStudent(){
			cout<<"univStudent ends"<<endl;
		}
		/*
		Derived class's destructor is called then base class's destructor called. 
		(Stack, LIFO)
		*/
};
int main(){
	univStudent ustd1("Kim", 22, "Software Eng.");
	ustd1.whoAreYou();
	
	
	univStudent ustd2("Chae", 22, "Computer Eng.");
	ustd2.whoAreYou();
}
