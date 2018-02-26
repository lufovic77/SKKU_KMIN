#include <stdio.h>
int tree[1000100];
void swap(int a, int b){
	int temp;
	temp=tree[a];
	tree[a]=tree[b];
	tree[b]=temp;
}
void downtop(int last){
	int index=last;
	while(index!=0){
		int a=tree[index/2];
		if(index/2==0)
		break;
		if(tree[index]>a){
			swap(index,index/2);
			index=index/2;
		}
		else
		return ;
	}
}
void topdown(int last){
	int index=1;
	while(index<=last){
		int a=tree[index*2];
		int b=tree[index*2+1];
		
		if((index*2)>last){
			return ;
		}
		else if((index*2)<=last && (index*2+1)>last){//only left available
			if(tree[index]<a){
				swap(index,index*2);
				index=index*2;
				continue;
			}
			else
			return ;
		}
		else{
			if(tree[index]<a){
				if(tree[index]<b){
					if(a>b){
						swap(index*2,index);
						index*=2;
						continue;
					}
					else{
						swap(index,index*2+1);
						index=(index*2+1);
						continue;
					}
				}
				else{
					swap(index,index*2);
					index*=2;
					continue;
				}
			}
			else if(tree[index]<b){
				swap(index,index*2+1);
				index=(index*2+1);
				continue;
			}
			else
			return ;
		}
	}
}
int zerocase(int last){
	if(tree[1]==0){
		printf("0\n");
		return last;
	}
	else{
		printf("%d\n", -tree[1]);
		tree[1]=tree[last];
		tree[last]=0;
		last--;
		topdown(last);
		return last;
	}
}
int main(){
	int N;
	scanf("%d", &N);
	int i=N,j;
	int first=1, last=0;
	while(i--){
		int a;
		scanf("%d", &a);
		if(a==0){
			last=zerocase(last);
		}	
		else{
			last++;
			tree[last]=-a;
			downtop(last);
		}
		
	}	
}
