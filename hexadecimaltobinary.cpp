#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int htod(string n){
  int ans=0;
  int mul=1;
  int s=n.size();
  for(int i=s-1;i>=0;i--){
    if(n[i]>'0' && n[i]<'9'){
      ans+=mul*(n[i]-'0');

    }
    else if(n[i]>'A' && n[i]<'F'){
      ans+=mul*(n[i]-'A'+10);
    }
    mul*=16;
  }

return ans;

}









int main(){
string n;
  cin>>n;
  cout<<htod(n)<<endl;







  return 0;
}
