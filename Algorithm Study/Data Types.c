#include <stdio.h>
#include <string.h>

int main(){

    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
   // Declare second integer, double, and String variables.
    int a; double b; char ch[500]; getchar();
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &i);a=4+i; getchar(); scanf("%lf", &d); b=4+d; 
	getchar(); gets(ch);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", a);
    // Print the sum of the double variables on a new line.
    printf("%lf\n", d);
    // Concatenate and print the String variables on a new line
    strcat(s,ch);
    // The 's' variable above should be printed first.
    puts(s);
 

return 0;
}
