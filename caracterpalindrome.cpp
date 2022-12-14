#include<iostream>
using namespace std;
int main(){
int n;cin>>n;
// char arr[n+1]; as the lat position is dedicated to"/0" (null character),
// we take n+1 size
cin>>arr;

bool check=1;
for(int i=0;i<n;i++){
  if(arr[i]!=arr[n-1-i]){
    check=0;
    break;
  }
}
if(check == true){
  cout<<"it is a palindrome\n";

}
else{
  cout<<"it is not a palindrome\n";
}






  return 0;
}
