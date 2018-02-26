#include <stdio.h>

unsigned long hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash%1000;
}

int main(){
	unsigned char a[4];
	unsigned char b[4];
	a[0]=9,a[1]=18,a[2]=35;
	b[0]=10,b[1]=19,b[2]=33;
	
	printf("a:%d b:%d\n", hash(a),hash(b));
}
