#include<stdio.h>
#include<stdlib.h>
int main(){
  void getlenght(){
    int count=0;
    struct node *temp;
    temp=head;
    while(temp!=0){
      count++;
      temp=temp->next;
    }
    printf("length is %d",count);
  }
  //in rwvwersing condition we traverse accross the list and store the value
  //of address of previous node pointer here so that it gets reversed
  //we use prevnode pointer
  //you keep a pointer nextnode to get the link forward which points to that newnode
  void reverse(){
    struct *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;//starting
    while(nextnode!=0){
       //move the nextnode pointer to next
       nextnode=nextnode->next;
       //now put current node next ,the value of previous node to get reversed
       currentnode->next=prevnode;
       //moving current node
       currentnode=nextnode;
    }
    //to bring head to last position so that it becomes first now
    head=prevnode;
  }

  return 0;
}
