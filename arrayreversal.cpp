#include<iostream>
using namespace std;
int main(){
  int a[5]={2,1,3,4,5};

  int l=0;
  int r=4;
  while(l<r){
    int temp=a[l];
    a[l]=a[r];
    a[r]=temp;
    l++;
    r--;
  }
  for(int i=0;i<5;i++){
    cout<<a[i]<<endl;
  }
return 0;
}
