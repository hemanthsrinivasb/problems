#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("enter the line");
	gets(a);
	int count=0;
	int i=0;
	while(a[i]!='\0'){
		if(a[i]==' '){
			count++;
		}
		i++;
	}
printf("spaces=%d",count);
    return 0;
}
