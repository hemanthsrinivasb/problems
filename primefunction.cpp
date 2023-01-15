#include<iostream>
using namespace std;
int checkprime(int n){
  for(int i=2;i<n;i++){
    if(n%i==0)
    return 0;
    else
    return 1;
  }
}

void countprime(int a[]){
  int count=0;
  for(int i=0;i<5;i++){
    int flag=checkprime(a[i]);
    count+=flag;
  }
  cout<<"No of prime numbers: "<<count<<endl;
}
int main(){
  int a[]={2,3,4,5,6};
  countprime(a);
  return 0;
}
