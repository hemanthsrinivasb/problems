#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *fip=NULL,*fop=NULL;
  char c;
  fip=fopen("input.txt","r");
  if(fip==NULL){
    printf("error");
    exit(1);
  }
  fop=fopen("output.txt","w");
  if(fop==NULL){
    printf("error");
    exit(1);
  }
  while((c=fgetc(fip))!=EOF){
    fputc(c,fop);
  }
  fclose(fip);
  fclose(fop);
  printf("successfully copied");
  return 0;
}
