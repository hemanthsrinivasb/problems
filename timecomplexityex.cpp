#include<iostream>
using namespace std;
// MORE COMPLEXITY
int bruteapproach(int a,int b){
  int ans=0;

  for(int i=a;i<=b;i++){
    ans+=i;
  }
  return ans;
}
// LESS COMPLEXITY
int lessapproach(int a,int b){
  int n=(b-a+1);
  int x=a;
  int ans=(n*(2*a+(n-1)*1))/2;
  return ans;
}
int main(){

cout<<bruteapproach(2,6)<<endl;
cout<<lessapproach(2,6)<<endl;
  return 0;
}
