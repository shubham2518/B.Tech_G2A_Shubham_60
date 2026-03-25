#include <stdio.h>
int main(){

  int n, a[100];

  printf("Enter the size of array : ");
  scanf("%d",&n);

  int i;
  printf("Enter the elements : ");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

 //Suppose first element is max
  int max = a[0];

   //Find max element
  for(i=1; i<n; i++){   // i=1 because already we are assumimg 1st element is max
    if (a[i] > max){    // compare current element with current max
    max=a[i];
    }
  }
   printf("Maximum element = %d",max);
 
  return 0;
}
