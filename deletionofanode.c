#include<stdio.h>
#include<stdlib.h>
int main(){
  struct node{
    int data;
    struct node *next;
  }
  struct node *head,*temp;
  //deleting from first positon
  DeletefromBeg(){
  temp=head;
  head=head->next;
  free(temp);
}
DeletefromEnd(){
  //deleting from end
   struct node *prevnode;//prevnode to store the address of previous node
   temp=head;
   while(temp->next!=0){
     prevnode=temp;
     temp=temp->next;
   }
   if(temp===head){
     head=0;
     free(temp);
   }
   else{
     prevnode->next=0;
     free(temp);
   }
}
DeletefromPos(){
  struct node *nextnode;
  int pos,i=1;
  temp=head;
  printf("enter position");
  scanf("%d",&pos);
  while(i<pos-1){
    temp=temp->next;
    i++;
  }
  nextnode=temp->next;
  temp->next=nextnode->next;
  free(nextnode);
}


  return 0;
}
