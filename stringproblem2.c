#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("enter the string " );
	gets(a);
	int i=0;
	while(a[i]!='\0'){
		printf("%c\n",a[i]);
		i++;
	}
    return 0;
}
