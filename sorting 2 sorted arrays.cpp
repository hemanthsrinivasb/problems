#include<iostream>
using namespace std;
int main(){
  int arr1[]={1,6,7,10};
  int arr2[]={0,1,3,8,11,12,15,18};
int m=4;
int n=8;
//code to merge  2 sorted array
int result[m+n];
int i=0;//arr1 iteration
int j=0;//arr2 iteration
int k=0;//result fiiling iteration
while(i<m && j<n){
  if(arr1[i]<arr2[j]){
    result[k]=arr1[i];
    k++;
    i++;
  }
  else{
    result[k]=arr2[j];
    k++;
    j++;

  }
}
while(i<m){
  // if arr2 is completed first then and arr1 is left
  result[k]=arr1[i];
  k++;
  i++;
}
while(j<n){
  // if arr1 is completed first then and arr2 is left
  result[k]=arr2[j];
  k++;
  j++;
}
for(int i=0;i<(m+n);i++){
  cout<<result[i]<<" ";
}cout<<endl;

 return 0;
}
