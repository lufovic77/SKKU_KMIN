#include <stdio.h>
typedef struct{
	int a[2];
	double asd;
}struct_t;
double func(int i){
	volatile struct_t s;
	s.asd=3.14;
	s.a[i]=1073741824;
	return s.asd;
}
int main(){
	int a;
	func(2);
}
