#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int parent[2000];
struct node{
	int a,b,c;node(): node(-1, -1, 0){}
    node(int u1, int v1, int w1): a(u1), b(v1), c(w1){}
    bool operator <(const node& O)const{ return c < O.c; }
};
int find(int n){
	if(parent[n]==-1)
	return n;
	return parent[n]=find(parent[n]);
}
struct node edge[2000];
/*
void merge(int a,int b){
	a=find(a);
	b=find(b);
	if(a==b)
	return ;
	parent[b]=a;
}
*//*
void insertionsort(int size){
	int i,j;
	int temp1,temp2;
	for(i=1;i<size;i++){
		int key=c[i];
		temp1=a[i];
		temp2=b[i];
		j=i-1;
		while(key<=c[j] && j>=0){
			a[j+1]=a[j];
			b[j+1]=b[j];
			c[j+1]=c[j];
			j--;
		}
		c[j+1]=key;
		a[j+1]=temp1;
		b[j+1]=temp2;
	}
}*/

/*
int splitPoint(int first,int last){
	
	int i,j;
	
	int pivot=c[first];
	
	int temp=0,temp1,temp2;
	
	
	int left=first+1;
	
	int right =last;
	
	while(left<=right){
		
		while(pivot>=c[left] && left<=right)
		left++;
		
		while(pivot<=c[right] && (left)<=right)
		right--;
		
		
		if(left<=right){
			temp=c[left];
			c[left]=c[right];
			c[right]=temp;
			temp1=a[left];
			a[left]=a[right];
			a[right]=temp1;		
			temp2=b[left];
			b[left]=b[right];
			b[right]=temp2;		
		}
	}
	temp=c[right];
	c[right]=pivot;
	c[first]=temp;
	temp1=a[right];
	a[right]=a[first];
	a[first]=temp1;
	temp2=b[right];
	b[right]=b[first];
	b[first]=temp2;
	
	return right;
}
void quickSort(int first , int last){
	if(first < last){
		int split;
		split = splitPoint( first, last);
        quickSort(first, split-1);
        quickSort(split +1, last);
	}
}*/
int main(){
	int N,M;
	scanf("%d%d",&N,&M);
	int i;
	for(i=0;i<1500;i++)
	parent[i]=-1;
	int weight=0;
	int x,y,z;
	for(i=0;i<M;i++){
		scanf("%d%d%d", &x,&y,&z);
		edge[i].a=x;
		edge[i].b=y;
		edge[i].c=z;
	}
	sort(edge,edge+M-1);
	for(i=0;i<M;i++){
		x=edge[i].a;
		y=edge[i].b;
		z=edge[i].c;
		x=find(x);
		y=find(y);
		if(x!=y){
			parent[y]=x;
			weight+=z;
		}
	}
	printf("%d", weight);
	
}
