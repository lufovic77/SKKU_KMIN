#include <stdio.h>
int main(){
char key[2]={'a','b'};
int number;
number = (int)key[0]; number <<= 8; number += (int)key[1]; 
printf("%d ", number);
}
