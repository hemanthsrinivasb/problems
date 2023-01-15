#include<stdio.h>
#include<string.h>


int main(){
  char str[120],ch;
  int i,len,pos=-1;
  puts("Give a string:");
  gets(str);
  printf("Give a character:");
  scanf("%c",&ch);
  int found=0;
  len=strlen(str);
  for(i=0;i<len;i++){
    if(str[i]==ch){
      pos=i+1;
      found=1;
      break;
    }
  }
    printf("position of %c in string is %d",ch,pos);
    return 0;
}
