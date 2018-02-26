#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char word[110];
	cin>>word;
	int stack[1000];
	int index=-1;
	int i;
	int length=strlen(word);
	if(length%2==0){ 	//when length is an even number
		for(i=0;i<length;i++){
			if(i==0){
				index++;
				stack[index]=word[i];
			}
			else{
				if(stack[index]==word[i])
				index--;
				else{
					index++;
					stack[index]=word[i];
				}
			}
		}
	}
	else{	//when length is odd number
		for(i=0;i<length;i++){
			if(i==length/2)
			continue;
			if(i==0 ){
				index++;
				stack[index]=word[i];
			}
			else{
				if(stack[index]==word[i])
				index--;
				else{
					index++;
					stack[index]=word[i];
				}
			}
		}
	}
	if(index==-1)
		cout<<1;
	else
		cout<<0;
}

