#include <stdio.h>
int main(){

  int n, a[100];

  printf("Enter the size of array : ");
  scanf("%d",&n);

  int i, product=1;
  printf("Enter the elements : ");
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
  //multiplication
   for(i=0; i<n; i++){
    product = product*a[i];
   }
   printf("Product of the elements in array = %d",product);
  return 0;
}
