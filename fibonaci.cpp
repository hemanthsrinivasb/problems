#include<iostream>
using namespace std;
int main(){
//fibonaci series take input and n
int n;
cout<<"Enter nubmer of terms:";
cin>>n;

int start=0;
int end=1;
int nextterm=0;
for(int i=0;i<n;i++){
  if(i==0){
    cout<<start<<" ";
    continue;
  }
  if(i==1){
    cout<<end<<" ";
    continue;
  }
  nextterm=start+end;

  start=end;
  end=nextterm;
    cout<<nextterm<<" ";
}


  return 0;
}
