#include<iostream>
using namespace std;

void indexing(string s,char c,int *p1,int *p2){
  for(int i=0;i<s.size();i++){
    if(s[i]==c){
      *p1=i;
      break;
    }
  }
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]==c){
      *p2=i;
      break;
    }
  }
}
int main(){
string s="aaadac";
char c='a';
int first=-1;
int last=-1;
int *p1=&first;
int *p2=&last;

cout<<*p1<<" "<<*p2<<endl;
indexing(s,c,p1,p2);
cout<<*p1<<" "<<*p2<<endl;
cout<<first<<" "<<last<<endl;




  return 0;
}
