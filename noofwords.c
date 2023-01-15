#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("enter the line");
	gets(a);
	int words=1;
	int i=0;
	while(a[i]!='\0'){
		if(a[i]==' '){
			words++;
		}
		i++;
	}
printf("words=%d",words);
    return 0;
}
