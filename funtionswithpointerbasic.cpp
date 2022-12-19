#include<iostream>
using namespace std;
void swap(int *x,int *y) {
  int temp=*x;
  *x=*y;
  *y=temp;
  /* code */
}
int main() {
  int x=1;
  int y=2;
  int *p1=&x;
  int *p2=&y;
  cout<<*p1<<" "<<*p2<<endl;
  swap(p1,p2);
  cout<<x<<" "<<y<<endl;

  /* code */
  return 0;
}
