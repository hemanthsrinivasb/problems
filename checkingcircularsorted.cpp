#include<iostream>
using namespace std;
bool check(int arr[],int n){
  int count=0;
  for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
      count++;
    }
  }
  if(count>1){
    return false;
  }
  else{
    return true;
  }
}
int main(){

int arr[]={23,34,45,12,17,19};
int n=sizeof(arr)/sizeof(arr[0]);
bool result=check(arr,n);

if(result){
  cout<<"It is circularly sorted array"<<endl;
}
else{
  cout<<"It is not sorted array\n";
}



  return 0;
}
