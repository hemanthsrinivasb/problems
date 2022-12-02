#include<stdio.h>
#include<math.h>
int main(){
  // int a,b;
  // a=8;
  // b=a<<3;
  // printf("%d",b);
  //

// float a,b;
// printf("enter a number:");
// scanf("%d",&a);
// b=ceil(a);
int a,n;
scanf("%d",&a);
n =a;
  int ans=0;
// scanf("%d",&b);
// (a>b)?printf("%d is greater than %d",a,b ):printf("%d is greater than %d",b,a );
while(a!=0){
  int remainder=a%10;
  ans=ans*10+remainder;
 a=a/10;
}
(n==ans)?printf("it is palindrome" ):printf("it is not palindrome");

return 0;
}
