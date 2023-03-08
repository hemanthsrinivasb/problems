#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
  int data;
  struct node *next;
};
  struct node *head,*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter the value you want to insert");
  scanf("%d",&newnode->data);
  //first update the address part i.e put address of next node in the newly created node
  //now as we want to insert in the beggining positon ,give the address of this node to the head
  newnode->next=head;//initially head has another addreass but now we are giving newnode address to head
  //now head will be empty so keep the value of node address into the head to insert at the begginig position
  head=newnode;
  return 0;
}
