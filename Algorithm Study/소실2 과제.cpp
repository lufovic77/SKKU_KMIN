#include <stdio.h>
long hash(char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}
int main(){
	char string[100]="asddfv!2#4%%^,fgd";
	printf("hash:%ld", hash(string)) ;
}


