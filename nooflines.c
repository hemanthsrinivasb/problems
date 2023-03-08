#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *fp=NULL;
  int count=1;
  char ch;
  fp=fopen("file2.txt","r");
  if(fp==NULL){
    printf("error");
    exit(1);
  }
  while((ch=fgetc(fp))!=EOF){
    if(ch=='\n'){
      count++;
    }
  }//end of file
  fclose(fp);
  printf("%d",count);
  return 0;
}
