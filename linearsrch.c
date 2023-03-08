#include<stdio.h>
int linearsearch(int a[],int element,int n){
  int i;
  for(i=0;i<n;i++){
    if(a[i]==element){
      return 1;
    }
  }
  return 0;
}
int main(){
  int a[6]={11,28,46,4,7,45};
  int data=3;
  int y;
  y=linearsearch(a,data,6);
  if(y==1){
    printf("Search is successful");
  }
  if(y==0){
    printf("element not found");
  }
  return 0;
}
