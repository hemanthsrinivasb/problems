#include<iostream>
#include<vector>
#include<climits>
using namespace std;

/* "LEFT MOST ONE METHOD" */

// DRY RUN
// 0 1 1 1
// 0 0 0 1
// 0 0 0 1
// here 1st we check the 1st row from the leftside so do j--
// you would get
// leftmostone=1(which is it 1st index) and
// maxonesrow=0;
// now use antoher loop to check ones in the next rows after 0th row
// if you find 1 at 0th index at any other row then that would be the maxonesrow
int leftmostone(vector<vector<int>>&v){
  int leftmostone=-1
  int maxonesrow=-1;
  int j=v[0].size()-1;

  // finding leftmost one in 0th row_end
  while(j>=0 & v[0][j]==1){
    leftmostone=j;
    maxonerow=0;
    j--;
  }

 // to check any other 1 in next row in down rows left to the present 1.
for(int i=1;i<v.size();i++){
  while(j>=0 & v[i][j]==1){
    leftmostone=j;
    j--;
    maxonerow=j;
  }


}

return maxonerow;
}



/* CHECKING FROM STARTING METHOD */


//DRY RUN
// 0 1 1 1
// 0 0 0 1
// 0 0 1 1
//
// maxones=3
// maxonesrow=0
// columns=4
// numberofones=4-1=3;
// after calculating 3 in las steo it gets stored in the maxones variable
// and the row number (i) is assigned as 0,
// to check columns we used j here,
//
//
//
// REMEMBER THE 2D VECTOR INPUT TAKING


int maxonesrow(vector<vector<int> >&v){
  int maxone=INT_MIN;
  int maxonerow=-1;
  int column=v[0].size();
  for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
      if(v[i][j]==1){
        int numberofones=column-j;
        if(numberofones>maxone){
          maxone=numberofones;
          maxonerow=i;
        }
        break;

      }
    }
  }
  return maxonerow;
}


int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int> > vec(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>vec[i][j];
    }
  }

int res=maxonesrow(vec);
int res1=leftmostone(vec);
cout<<res<<endl;
cout<<res1<<endl;


  return 0;
}
