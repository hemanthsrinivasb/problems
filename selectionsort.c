
#include<stdio.h>
int *selectionSort(int a[],int n);
int *selectionSort(int a[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min])
            min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    return a;

}
int main(){
    int b[6]={25,86,,4,12,95,18};
    int *p1,i;
    p1=selectionSort(b,6);
    printf("sorted elements");
    i=0;
    while(i<6){

    }

}