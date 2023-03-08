#include<stdio.h>
int * bubbleSort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
    return a;
}
void main(){
int i,j,n=6;              
int b[]={25,86,4,12,95,18};
int *p1;
printf("elements of array before sort:");
for(i=0;i<n;i++){
    printf("%d",b[i]);
}
p1=bubbleSort(b,n);
i=0;
printf("elements after sorting");
while(i<n){
    printf("%d",*(p1+i));
    i++;
}
}