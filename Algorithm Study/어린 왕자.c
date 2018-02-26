#include <stdio.h>
#include <math.h>
	int count[1000];
int main(){
	int T;
	scanf("%d", &T);
	int i,j;
	int sx,sy,ex,ey;
	int cx,cy,r;
	for(i=0;i<T;i++){
		scanf("%d%d%d%d", &sx,&sy,&ex,&ey);
		int n;
		scanf("%d", &n);
		for(j=0;j<n;j++){
			scanf("%d%d%d", &cx,&cy,&r);
			long long result1=(long long)(pow(sx-cx,2)+pow(sy-cy,2)-r*r);
			long long result2=(long long)(pow(ex-cx,2)+pow(ey-cy,2)-r*r);
			if(result1*result2<=0)
			count[i]++;
		}
	}	
	for(i=0;i<T;i++){
		printf("%d", count[i]);
		if(i!=T-1)
		printf("\n");
	}
}

