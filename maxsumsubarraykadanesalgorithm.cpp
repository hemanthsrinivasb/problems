#include<iostream>
#include<climits>
using namespace std;
int main(){
 int n;
 cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
int currentsum=0;
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
  currentsum+=arr[i];
  if(currentsum<0){
    currentsum=0;

  }
  maxsum=max(maxsum,currentsum);
}
cout<<maxsum<<endl;

  return 0;
}
// here with respect to the imput we check like[-1,4,-6,7,-4];
// continue to store the sum conitnously and if sum is -ve then assign
// 0 to it and then check remaining to get highest sum
