#include <stdio.h>
int multiply(int x, int y){
  return (x * y);
}
int main(){
  int a, b;
  
  printf("Enter the 1st number : ");
  scanf("%d",&a);

  printf("Enter the 2nd number : ");
  scanf("%d",&b);

  int product = multiply(a, b);
  printf("Multiplication of the given numbers = %d",product);
  return 0;
}
