#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  // 16
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    printf("%d ",j);
  }
  printf("\n");
}

// 18
int in=1;
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    printf("%d ",in);
    in++;
  }
  printf("\n");


}

//  17
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    printf("* ");
  }
  printf("\n");
}

// 19
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    printf("%d ",i);
  }
  printf("\n");
}

// 20
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    printf("* ");
  }
  printf("\n");
}
for(int i=n-1;i>=1;i--){
  for(int j=1;j<=i;j++){
    printf("* ");
  }
  printf("\n");
}



  return 0;
}
