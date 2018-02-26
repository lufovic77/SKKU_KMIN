#include <stdio.h>
void func(){
	static int result=1;
	return ;
}
int main(){
	func();
	
	printf("%d", result);
}
