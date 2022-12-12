#include<iostream>
using namespace std;
int main(){
// given 2d array is sorted order like
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
//
// now fix a poition like top right postion 4 and  the target element
// is 11,now rather considering the original method which checks each element and
// returns whether element is present or not we use some LOGICAL APPROACH
// if the target number is greater the present element(4),then move towards  downwards
// otherwise move leftwards,


int n,m;
cin>>n>>m;

int target;cin>>target;
int a[n][m];

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cin>>a[i][j];
  }
}
int r=0,c=m-1;
bool found=false;
while(r<n && c>=0){
  if(a[r][c]==target){
    found=true;
  }
  if (a[r][c]>target){
    c--;
  }
  else{
    r++;
  }



  }
  if(found){
    cout<<"Element is found\n";
  }
  else{
    cout<<"Element is not found\n";
  }




  return 0;
}
