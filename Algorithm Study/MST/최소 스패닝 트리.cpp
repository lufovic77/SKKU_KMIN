#include <stdio.h>
typedef struct edge{
	int snode;
	int enode;
	int weight;
	int enable;
}EDGE;
int f;
struct edge edge[100110];//간선의 정보(두 노드와 가중치) 저장하는 용도 
int node[20010]; //노드 저장하는 용도 
int parent[20010]; 
int numnode=0;

void quickSort2( int left, int right)
{
  int k;
  int i, j, pivot;
  i = left;
  j = right;
  pivot = left;
  if(i >= j)
    return;

  while(i < j)
  {
    while(node[++i] < node[pivot])
    {
      if(i >= right)
        break;
    }
    while(node[j] > node[pivot])
    {
      j--;
      if(j <= left)
        break;
    }
    if(i < j){
    	int tmp;
    	tmp=node[i];
    	node[i]=node[j];
    	node[j]=tmp;
    }
  }
  int tmp2=node[pivot];
  node[pivot]=node[j];
  node[j]=tmp2;
  quickSort2( left, j - 1);
  quickSort2( j + 1, right);
}


void quickSort1( int left, int right)
{
	int tmp;
	int tmp1,tmp2;
  int k;
  int i, j, pivot;
  i = left;
  j = right;
  pivot = left;

  if(i >= j)
    return;

  while(i < j)
  {
    while(edge[++i].weight < edge[pivot].weight)
    {
      if(i >= right)
        break;
    }
    while(edge[j].weight > edge[pivot].weight)
    {
      j--;
      if(j <= left)
        break;
    }
    if(i < j){
    

  tmp = edge[i].weight;
  edge[i].weight = edge[j].weight;
  edge[j].weight = tmp;
  
  tmp1 = edge[i].snode;
  edge[i].snode = edge[j].snode;
  edge[j].snode = tmp1;
  
  tmp2 = edge[i].enode;
  edge[i].enode = edge[j].enode;
  edge[j].enode = tmp2;
	}
  
}
  tmp=edge[pivot].weight;
  edge[pivot].weight=edge[j].weight;
  edge[j].weight=tmp;
  
  
  tmp1 = edge[pivot].snode;
  edge[pivot].snode = edge[j].snode;
  edge[j].snode = tmp1;
  
  tmp2 = edge[pivot].enode;
  edge[pivot].enode = edge[j].enode;
  edge[j].enode = tmp2;
  
  quickSort1( left, j - 1);
  quickSort1( j + 1, right);
}


int bs1(int finding){
	int first=0;
	int last=f-1;	
	int middle=(first+last)/2;
	while(first<=last){
		middle=(first+last)/2;
		if(finding==node[middle])
		return middle;
		else if(finding>node[middle])
		first=middle+1;
		else
		last=middle-1;
	}
	return -1;
}
int bs2(int finding,int last){
	int first=0;
	int middle=(first+last)/2;
	while(first<=last){
		middle=(first+last)/2;
		if(finding==node[middle])
		return middle;
		else if(finding>node[middle])
		first=middle+1;
		else
		last=middle-1;
	}
	return -1;
}
int main(){
	int numedge;
	scanf("%d", &f);
	scanf("%d",&numedge);
	int index=0;
	int a,b,c;
	int i,j;	//enable 0으로 초기화! 
	
	int temp=numedge;
	while(numedge--){
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		edge[index].snode=a;
		edge[index].enode=b;
		edge[index].weight=c;
		index++;
	}
	quickSort1(0,temp-1);
	
	int size=0;
	int current1,current2;
	int check1=0,check2=0;
	node[0]=edge[0].snode;
	node[1]=edge[0].enode;
	size=2;
	quickSort2(0,size-1);
	for(i=1;i<temp;i++){
		check1=0;
		check2=0;
		current1=edge[i].snode;
		current2=edge[i].enode;
		
		quickSort2(0,size-1);
		
		check1=bs2(current1,size-1);
		check2=bs2(current2,size-1);
		if(check1==-1){
			node[size]=current1;
			size++;
		}
		if(check2==-1){
			node[size]=current2;
			size++;
		}
		
	}	///node 다 뽑아내기 완료 

		quickSort2(0,size-1);
		
	
	for(i=0;i<20010;i++)
	parent[i]=4792832;
	
	
	numnode=size;  //node 의 개수 
	numedge=0;
	i=0;
	int index2;
	int index3;
	long long weight=0;
	while(1){
		a=edge[i].snode;
		b=edge[i].enode;
		
		while(1){
			
			index=bs1(a);//bs로 쨋든 찾아내! 
			if (parent[index]==4792832){
			break;
			}
			a=parent[index];
		}
		while(1){
			
			index2=bs1(b);//bs로 쨋든 찾아내! 
			if (parent[index2]==4792832){
			break;
			}
			b=parent[index2];
		}
		if(a!=b){
			index3=bs1(a);
			parent[index3]=b;
			numedge++;
			weight+=edge[i].weight;
		}
		if(numedge==size-1)
		break;
		i++;
	}
	printf("%lld", weight);
}
