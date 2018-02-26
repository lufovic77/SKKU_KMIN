#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	vector<int>::iterator vi;
	v.assign(10,3);
	for(int i=0;i<10;i++)
	cout<<v.at(i)<<endl;
	
	for(vi=v.begin();vi!=v.end();vi++)
		cout<<*vi<<endl<<endl;
}
