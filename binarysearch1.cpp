#include<iostream>
using namespace std;
int index(int a[],int n,int s,int e){
  while(s<=e){
  int m=(s+e)/2;
  if(a[m]>n){
  e=m-1;
}
  else if(a[m]<n){
  s=m+1;
}
  else if(a[m]==n){
  return m;
}

}
return -1;
}
int main(){
int a[]={1,2,3,4,5};
int t=2;
int s=0;
int e=4;
int ans=index(a,t,s,e);
cout<<ans<<" ";

  return 0;
}
