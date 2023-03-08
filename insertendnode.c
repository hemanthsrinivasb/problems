#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
  int data;
  struct node *next;
};
  struct node *head,*newnode,*temp;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter the value you want to insert");
  scanf("%d",&newnode->data);
  newnode->next = 0;//last node so keep address as NULL
  //to insert at end we need to use another temp pointer to traverse all the list elements AND
  //after reaching last block we will mkae changes
  temp=head;
//to move to end use a while loop until temp-.next is not equal to zero
while(temp->next!=0)
{
  temp=temp->next;

}
temp->next=newnode;//this will point to the address of newly created node and
//it will be inserted at the end

 return 0;
}
