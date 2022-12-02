#include<iostream>
#include<vector>
using namespace std;

// writing a function to return the elements in pascal triangle first decalre a double vector and then
// iterate rows like
// [],
// [ , ],
// [ , , ], to get increase the size of vector each time we use resize to increase it and if j=0 or j=n ending it will have one only and
// the remaining elements can be calculated by the sum of previous up element and beside up element
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// and then return and write it in the main function and run it to get the pascaltriangle

vector<vector<int>> pascaltriangle(int n){
  vector<vector<int>> pascal(n);

  for(int i=0;i<n;i++){
    pascal[i].resize(i+1);

    for(int j=0;j<i+1;j++){
      if(j==0 || j==i){
        pascal[i][j]=1;
      }
      else{
        pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
      }
    }


  }


return pascal;

}



int main(){
  int n;
  cin>>n;

  vector<vector<int>> ans;
  ans=pascaltriangle(n);
for (  int i=0;i <ans.size();  i++) {
  for(int j=0;j<ans[i].size();j++){
    cout<<ans[i][j]<<" ";
  }
  cout<<endl;
  /* code */
}









  return 0;
}
