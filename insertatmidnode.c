 #include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
  int data;
  struct node *next;
};
int pos,i=1;
  struct node *head,*newnode,*temp;

  printf("enter the position you want to insert");
  scanf("%d",&pos);
  if(pos>count){
    printf("invalid positon");
  }
  else{
    temp=head;
    //while loop to reach until the position we want to insert
    while(i<pos){
      temp=temp->next;
      i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;//the address which is there in temp next is sent into newnode next
    temp->next=newnode;//now current place the address which is there in new node is given

  }


 return 0;
}
