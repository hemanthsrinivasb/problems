#include<iostream>
using namespace std;

int main(){
// int a;
// int c=18;
// float n=3;
// int *ptr=&c;
// float *p=&n;
// cout<<ptr<<endl;
// // DEREFERNCE OPERATOR='*'
// cout<<*ptr<<endl;
// c=50;
// // *ptr=50;(This can also be written and  same value )
//
//
// cout<<*ptr<<endl;;
// cout<<ptr;

int a,b;//delaring a and b as int

cin>>a>>b;//taking input value

int *ptra=&a;//storing address of a
int *ptrb=&b;//storing address of b

int result;
int *ptr_result=&result;

*ptr_result=*ptra+*ptrb;

cout<<result<<" "<<*ptr_result<<endl;



return 0;
}
