#include <stdio.h>
#include <string.h>
char infix[100000];
char postfix[100000];
char stack[3000000];
int main(){
	scanf("%s", infix);
	int i;
	int top=-1;
	char now;
	int index=0;
	int size=strlen(infix);
	int count=0;
	int temp=size;
	int j;
	for(i=0;i<size;i++){
		now=infix[i];
		if(now>=65 && now<=90){
			postfix[index]=now;
			index++;
		}
		else if (now=='('){
			top++;	
			temp--;		
			stack[top]=now;
		}
		else if(now==')'){
			while(stack[top]!='(' && top>=0){
				postfix[index]=stack[top];
				index++; 
				top--;
			}
			temp--;
			top--;
		}
		else if(now=='+' || now=='-'){
			while(stack[top]!='(' &&  stack[top]!='(' && top>=0){
				postfix[index]=stack[top];
				index++;
				top--;
			}
				top++;
				stack[top]=now;
		}
		else {
			while(stack[top]!='+' && stack[top]!='-' && stack[top]!='(' && top>=0){
				postfix[index]=stack[top];
				index++;
				top--;
			}
				top++;
				stack[top]=now;
		}
			count++;
			if(count==size){
				while(top>=0){
					postfix[index]=stack[top];
					top--;
					index++;
				}
			}
	}
	for(i=0;i<temp;i++)
	printf("%c", postfix[i]);
}
