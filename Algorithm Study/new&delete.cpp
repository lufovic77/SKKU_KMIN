#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int *arr=new int[10];
	int i;
	for(i=0;i<10;i++){
		arr[i]=i;
	}
	for(i=0;i<10;i++)
	cout<<arr[i];
}
