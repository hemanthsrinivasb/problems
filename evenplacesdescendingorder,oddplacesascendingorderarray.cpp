#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int p,q;
int a[]={1,2,1,4,5,6,8,8};
int n=sizeof(a)/sizeof(a[0]);
int b[n];
for(int i=0;i<n;i++){
  b[i]=a[i];
}
sort(b,b+n);
p=0;
q=n-1;
for(int i=n-1;i>=0;i--){
  if(i%2!=0){
    a[i]=b[q];
    q--;
  }
  else{
    a[i]=b[p];
    p++;
  }
}
for(int i=0;i<n;i++){
  cout<<a[i]<<" ";
}
return 0;
}
