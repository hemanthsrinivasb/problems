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
int result[r2][c1];
for(int i=0;i<r2;i++){
  for(int j=0;j<c2;j++){
    cin>>B[i][j];
  }
}
if(c1!=r2){
  cout<<"multiplication is not possible"<<endl;

}
int C[r1][c2];
for(int i=0;i<r1;i++){
  for(int j=0;j<c2;j++){
    int value=0;
    for(int k=0;k<r2;k++){
      value+=A[i][k]*B[k][j];
    }
    C[i][j]=value;


    for(int i=0;i<r2;i++){
      for(int j=0;j<c1;j++){
        result[i][j]=A[i][j]+B[i][j];

      }
    }

  }

}
// multiplication result
for(int i=0;i<r1;i++){
  for(int j=0;j<c2;j++){
    cout<<C[i][j]<<" ";
  }
  cout<<endl;
}
// addition result
for(int i=0;i<r2;i++){
  for(int j=0;j<c1;j++){
    cout<<result[i][j]<<" ";

  }cout<<endl;
}

  return 0;
}
