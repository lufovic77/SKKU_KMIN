#include <iostream>
using namespace std;
/*<Static in C>
1. Global variable
: By definition, other files can approach the global variable. 
If declared static, only in-file approach is enabled.
2. Local varialbe
: Like global variable, it goes up to memory space when program starts
and goes down when ends if declared static.
That is, whether the function terminates, the value still kept stored. 
*/

/*<Static in C++>
1. Static variable in C++ is treated as a global variable. 
It does not belong to its object or class.
*/
class soSimple{
	public:
		static int simObjCnt;	//should be public
	public:
		soSimple(){
			simObjCnt++;
		}
};
int soSimple::simObjCnt=0; //'Must' initialize outside of the class.

int main(){
	cout<<soSimple::simObjCnt<<"th soSimple object"<<endl;
	/*
	Can approach without generating an object because it does not belong to class!!!!
	*/
	
	soSimple sim1;
	soSimple sim2;
	
	cout<<soSimple::simObjCnt<<"th soSimple object"<<endl;
	//Should be public
	cout<<sim1.simObjCnt<<"th soSimple object"<<endl;
	cout<<sim2.simObjCnt<<"th soSimple object"<<endl;
	/*
	Possible, but not recommended becuase we can't recognize
	whether it is approaching the static variable or member variable in an object.
	*/
}
