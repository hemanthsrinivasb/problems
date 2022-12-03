#include<iostream>
#include<math.h>
// #include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  int fnum=1;
for(int i=1;i<=n;i++){
  for(int j=1;j<i;j++){
    cout<<fnum<<" ";
    fnum++;
  }cout<<endl;
}


  return 0;
}
