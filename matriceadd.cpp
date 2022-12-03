#include<iostream>
using namespace std;
int main(){

int r1,c1;
cin>>r1>>c1;

int A[r1][c1];
for(int i=0;i<r1;i++){
  for(int j=0;j<c1;j++){
    cin>>A[i][j];
  }
}
int r2,c2;
cin>>r2>>c2;

int B[r2][c2];
for(int i=0;i<r2;i++){
  for(int j=0;j<c2;j++){
    cin>>B[i][j];
  }
}
int result[r2][c1];

for(int i=0;i<r2;i++){
  for(int j=0;j<c1;j++){
    result[i][j]=A[i][j]+B[i][j];

  }
}
for(int i=0;i<r2;i++){
  for(int j=0;j<c1;j++){
    cout<<result[i][j]<<" ";

  }cout<<endl;
}







return 0;
}
