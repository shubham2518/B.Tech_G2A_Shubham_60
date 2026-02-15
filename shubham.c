#include<stdio.h>
int main () {

  int a,b,max;
  printf("Enter two numbers:\n");
  scanf("%d %d",&a,&b);

  max=a>b? a:b,
  printf("\ngreater number=%d",max);
  
  return 0;
}