#include<iostream>
#include<vector>
using namespace std;
void upper(vector<vector<int>> arr,int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j>=i){
        cout<<arr[i][j]<<" ";
      }
      else{
        cout<<"  ";
      }

    }
    cout<<endl;
  }

}

int main(){
  int n;
  cin>>n;

  vector<vector<int>> arr(n,vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
upper(arr,n);

  return 0;
}
