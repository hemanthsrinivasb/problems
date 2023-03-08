#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
  int data;
  struct node *next;
};
struct node *head,*newnode,*temp;
head=NULL;
int choice;
int count=0;
//to allocate memory to the node,it is not created yet we use dynamic memomry allocation
//CREATING A ONE NEW NODE AND CLOSING IT BY GIVING NULL AT END
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));//newnode is a pointer that stores the address of newly created node
printf("enter data :");
scanf("%d",&newnode->data);//we cannot directly keep &data,so we use the created ptr of node and send data into it
newnode->next=NULL;
//END OF THE CREATED NODE
if(head==NULL){
head=temp=newnode;//initially head is null,but now we have a node here so we give that address to head
}
else{
  temp->next=newnode;//if another node is created then its address is given to next block of head but not given to the head
  temp=newnode;
  //temp can be moved across the linked list
}
//these both process are applicable only until 2 nodes,so we use another temp pointer
printf("Do you want to continue?");
scanf("%d",&choice);
}
//printing the list
temp=head;
while(temp!=0){
  printf("%d\n",temp->data);
  temp=temp->next;
  count++;
}
printf("\nnumber of nodes is %d",count);
  return 0;
}
