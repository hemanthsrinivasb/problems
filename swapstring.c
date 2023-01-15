#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20],c[20];
	printf("enter the 1st string " );
	gets(a);
	printf("enter the 2nd string " );
	gets(b);
	strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
	printf("%s\n",a);
	printf("%s",b);
    return 0;
}
