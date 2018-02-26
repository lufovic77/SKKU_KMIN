#include <stdio.h>
int Rev2(int);
int Rev3(int);

int main(){
	int x=0, y=0;
	int result1 = 0, result2 = 0, result3=0;

	scanf("%d%d", &x, &y);

	if (x < 10)
		result1 =x;
	else if (x < 100)
		result1 = Rev2(x);
	else if (x < 1000)
		result1 = Rev3(x);
	else
		result1 = 1;

	if (y < 10)
		result2 = y;
	else if (y < 100)
		result2= Rev2(y);
	else if (y< 1000)
		result2= Rev3(y);
	else
		result2= 1;
	int preanswer = 0, answer = 0;

	preanswer = result1 + result2;
	if (preanswer < 10)
		answer = preanswer;
	else if (preanswer < 100)
		answer = Rev2(preanswer);
	else if (preanswer < 1000)
		answer = Rev3(preanswer);
	else
		answer = 1;



	printf("%d",answer);
	

}

int Rev2(int n){
	int first = 0, second = 0;

	first = (n/10);
	second = (n % 10);
	return (10 * second + first);


}

int Rev3(int n){
	int first = 0, second = 0, third = 0;
	first = (n / 100);
	n = (n - 100 * first);
	second = (n / 10);
	third = (n % 10);

	return(100 * third + 10 * second + first);

}
