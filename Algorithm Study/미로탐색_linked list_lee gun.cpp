#include <stdio.h>
#include <stdlib.h>
void push(int,int,int);
void dequeue(void);
int q=0;
int answer=0;
int count2=0;
int tempcount=0;
int visited[110][110];
int array[110][110];

   typedef struct node{
      int count;
      int x;
      int y;
      struct node* next;
   }NODE;

NODE* temp2;
NODE* front=NULL;
NODE* rear=NULL;
NODE* prevnode=NULL;
NODE* temp;

int main(){

   int N,M,cnt=1;
   scanf("%d\n%d", &N,&M);
   int i,j;
   for(i=1;i<=N;i++){
      for(j=1;j<=M;j++){
         scanf("%1d",&array[i][j]);       //이거 처음 알았음!%1d is available, and also using the string is also available.
      }
   }
   for(i=1;i<=N+1;i++)
   array[i][M+1]=0;
   for(i=1;i<=M+1;i++)
   array[N+1][i]=0;
   //currentx!=N && currenty!=M
   int currentx=1,currenty=1;
   push(currentx,currenty,cnt);
   visited[currentx][currenty]=1;

   do{
      count2++;
      /*if(front!=NULL){
      answer=front->count;
  }*/
  if(front!=NULL)
  {
      currentx=front->x;
      currenty=front->y;
      cnt=front->count;
      if(currentx==N&&currenty==M)
      answer=cnt;
      printf("%d %d %d\n",currentx,currenty,cnt);
      dequeue();
  }

   //   printf("\n\n %d %d\n", currentx,currenty);
   //   array[currentx][currenty]=0;

      if(array[currentx][currenty+1]==1 && visited[currentx][currenty+1]!=1){
         push(currentx,currenty+1,cnt+1);
         visited[currentx][currenty+1]=1;
     }


      if(array[currentx+1][currenty]==1 && visited[currentx+1][currenty]!=1){
         push(currentx+1,currenty,cnt+1);
         visited[currentx+1][currenty]=1;
     }
     //printf("??\n");

      if(array[currentx][currenty-1]==1 && visited[currentx][currenty-1]!=1) {
         push(currentx,currenty-1,cnt+1);
         visited[currentx][currenty-1]=1;
     }


      if(array[currentx-1][currenty]==1 && visited[currentx-1][currenty]!=1){
         push(currentx-1,currenty,cnt+1);
         visited[currentx-1][currenty]=1;
     }
      /*currentx=front->x;
      currenty=front->y;
   temp=front;printf("\n");
   while(temp!=NULL){
      printf("%d %d/", temp->x,temp->y);
      temp=temp->next;
  }*/

   }while(currentx!=N || currenty!=M );
//   printf("\n\ndepth : %d",  answer);


   printf("%d", answer);
}
void push(int x,int y,int cnt){
   NODE* node=(NODE*)malloc(sizeof(NODE));
   node->x=x;
   node->y=y;
   node->count=cnt;
   node->next=NULL;
   /*if( prevnode!=NULL){
      prevnode->next=node;
      rear=node;
   }
   if(front==rear ){
      front=node;
   }
   prevnode=node;
   node->next=NULL;*/

   if(front==NULL)
   {
       front=node;
       rear=node;
   }
   else
   {
       rear->next=node;
       rear=node;
   }
}
void dequeue(void){
   /*if(front==rear){
      prevnode=NULL;               //얘도 빡치네
      front=NULL;
      rear=NULL;
   }
   else{
      prevnode=front->next;         //요게 계속 문제였음!
      temp2=front;
      front=front->next;
      free(temp2);
  }*/

  front=front->next;
  if(front==NULL)
  {
      rear=NULL;
      front=rear;
  }
}
