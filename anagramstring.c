#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	int i,j,l1,l2,temp,flag=2;
	printf("enter the 1st string " );
	gets(a);
	printf("enter the 2nd string " );
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2){
		for(i=0;i<l1;i++){
			for(j=0;j<l1;j++){
				if(a[i]>a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<l2;i++){
			for(j=0;j<l2;j++){
				if(b[i]>b[j]){
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}


	}
	if(strcmp(a,b)==0){
		flag=2;
	}
	else{
		flag=1;
	}
	(flag==2)?printf("its an anagram"):printf("its not an anagram");

    return 0;
}
