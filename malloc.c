#include<stdio.h>
#include<stdlib.h>
int main(){
  //malloc is also called as memory allocation
  // //malloc is mostly used for structures and arrays
  // //malloc allocates single block of memory from heap area
  //if no input is given then garbage values are taken
  //void* malloc(n*sizeof(int))
  // int *p,n,i;
  // printf("enter n:");
  // scanf("%d",&n);
  // p=(int*)malloc(n*sizeof(int));
  // printf("enter the elements :");
  // for(i=0;i<n;i++){
  //   scanf("%d",(p+i));
  // }
  // printf("the elements are\n");
  // for(i=0;i<n;i++){
  //   printf("%d\n",*(p+i));
  // }
  // free(p);//to clear out the memory after using from heap

  //calloc is known as contiguous allocation
  // it is used to allocate dynamically in multiple blocks of memory where
  // each block of memory is of same size
  //void* calloc(no.of blocks,size of each block)
  //if no input is given then all values will be 0's
  // int *p,n,i;
  // printf("enter n:");
  // scanf("%d",&n);
  // p=(int*)calloc(n,sizeof(int));
  // printf("enter the elements :");
  // for(i=0;i<n;i++){
  //   scanf("%d",(p+i));
  // }
  // printf("the elements are\n");
  // for(i=0;i<n;i++){
  //   printf("%d\n",*(p+i));
  // }
  // free(p);//to clear out the memory after using from heap

 //realloc is used to increase/decrease the size of already allocated dynamic memory
 //void* realloc(void* ptr,new size);
 //the previous content is not lost,it is stored
 int *p,n,i;
 printf("enter n:");
 scanf("%d",&n);
 p=(int*)calloc(n,sizeof(int));
 printf("enter the elements :");
 for(i=0;i<n;i++){
   scanf("%d",(p+i));
 }
 printf("enter updated size");
 scanf("%d",&n);
 int *p1=(int*)realloc(p,n*sizeof(int));
 printf("previous address=%d,present address=%d\n",p,p1);
 printf("values are\n");
 for(i=0;i<n;i++){
   printf("%d\n",*(p1+i));
 }
 free(p);//to clear out the memory after using from heap


   return 0;
}
