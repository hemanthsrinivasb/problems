#include<stdio.h>
#include<string.h>
int main(){
	//1st method
	// char a[100],b[100];
	// int l;
	// printf("enter the atring");
	// gets(a);
	// strcpy(b,a);
	// strrev(a);
	// l=strcmp(a,b);
	// if(l==0)
	// printf("it is a palindrome");
	// else
	// printf("it is not a palindrome");
	//

// 2nd method
char a[10];
int i,l;
printf("enter string:");
gets(a);
int n;
l=strlen(a);
for(i=0;i<l/2;i++){
	if(a[i]==a[l-1-i]){
		// printf("it is a palindrome");
		n=1;
	}
	else{
	// printf("it is not a palindrome");
	n=0;
 }
}
(n==1)?printf("it is a pllindrome"):printf("it is not a palindrome");


    return 0;
}
