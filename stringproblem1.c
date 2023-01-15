#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("enter the line in small letters ");
	int i,v=0,c=0,s=0;
	gets(a);

	for(int i=0;i<strlen(a);i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			v++;
		}
		else if(a[i]==' '){
			s++;
		}
		else{
			c++;
		}
	}
	printf("vowel=%d\n",v);
	printf("consonants=%d\n",c);
	printf("spaces=%d\n",s);
    return 0;
}
