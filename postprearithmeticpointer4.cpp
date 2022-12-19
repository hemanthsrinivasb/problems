#include<iostream>
using namespace std;
int main(){
int arr[]={1,2};
int *ptr=&arr[0];
cout<<ptr<<" "<<*ptr<<endl;
//first reuturns the derefernce valuse and then increments the value presetnt there
cout<<++*ptr<<endl;
cout<<arr[0]<<" "<<arr[1]<<endl;
cout<<ptr<<" "<<*ptr<<endl;

  return 0;
}
