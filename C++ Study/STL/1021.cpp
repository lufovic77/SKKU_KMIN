#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int answer=0;
int finding(int wanted,int* v, int size,int index){

	int count1=0,count2=0;
	int i=index;
	while(v[i]!=wanted){
		if(i==size+1){
			i=1;
			continue;
		}
		i++;
		count1++;
	}
	int point=i;
	i=index;
	while(v[i]!=wanted){
		if(i==0){
			i=size;
			continue;
		}
		i--;
		count2++;
	}
	
	for(int j=(count1>=count2)?i:point;j<size;j++)
	v[j]=v[j+1];
	answer+=(count1>=count2)?count2:count1;
	for(int k=1;k<size;k++)
	cout<<v[k]<<" ";
	cout<<"answer: "<<answer<<endl;
	i++;
	point++;
	if(i==size)
	i==1;
	if(point==size)
	point==1;
	return (count1>=count2)?i:point;
}

int main(){
	int v[1000];
	queue<int> wanted;
	int size,num;
	cin>>size>>num;
	int head=0;
	for(int i=1;i<=size;i++)
	v[i]=i;
	for(int i=0;i<num;i++){
		int temp;
		cin>>temp;
		wanted.push(temp);
	}
	int index=size;
	for(int i=0;i<num;i++){
		for(int k=1;k<=size;k++)
		if(v[k]==index){
				index=k;
				break;
			}
		cout<<"index: "<<index<<endl;
		index=finding(wanted.front(),v,size,index);
		size--;
		wanted.pop();
	}
	cout<<answer;
}
