#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void rotatearray(vector<vector<int>> &vec){
  int n=vec.size();
  //transpose of a matrix by keeping diagonal elements same
  //NEW WAY TO "SWAP"
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      swap(vec[i][j],vec[j][i]);
    }
  }
  // reverse the elements of each row to get the desired swap matrix
  for(int i=0;i<n;i++){
    reverse(vec[i].begin(),vec[i].end());
  }

  return;
}
int main(){
  int n;
  cin>>n;
  vector<vector<int>> vec(n,vector<int> (n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>vec[i][j];
    }
  }

rotatearray(vec);
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout<<vec[i][j]<<" ";
  }
  cout<<endl;
}
  return 0;
}
