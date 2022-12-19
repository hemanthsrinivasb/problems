#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3};
int(*p)[3]=&arr;
cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr<<endl;


  return 0;
}
