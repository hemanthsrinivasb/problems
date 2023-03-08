#include<stdio.h>
int main(){
  FILE *file;
// //entering information into file
//   file=fopen("file2.txt","w");
// //file=fopen("file2.txt","r");
//   fprintf(file,"HEY! you are beautiful");


//reading information from the file
// file=fopen("file2.txt","r");
// char s;
// if(file==NULL){
//     printf("/ncannot open the file/n");
//     exit(1);
// }

// do
// {
//     s=getc(file);//read each character
//     printf("%c",s);
// }
// while(s!=EOF);
// fclose(file);


//some examples
file=fopen("file2.txt","w+");
fputs("My name is hemanth",file);
fseek(file,7,SEEK_SET);
fputs(" srinivas!");
printf("%s",file);
fclose(file);
//fwrite is only used in binary mode
    return 0;
}