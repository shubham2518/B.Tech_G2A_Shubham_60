#include <stdio.h>

int main() {

  int n, a[100];
  
  printf("Enter the size of array : ");
  scanf("%d",&n);

  printf("Enter the Elements: ");
  for(int i=0; i<n; i++)
  scanf("%d",&a[i]);

  //Selection sort

  for(int i=0; i<n-1; i++ ){
    int minIndex = i;
    for(int j=i+1; j<n; j++){   //we can't use j=0 because we need not recheck already sorted elements
      if(a[j] < a[minIndex])     //j<i checks all remaining elements
      minIndex = j;
    }
    //Swap
    int temp;
    temp = a[i];
    a[i] = a[minIndex];
    a[minIndex] = temp;
  }

  //output
  printf("Sorted Array : ");
  for(int i=0; i<n; i++){
    printf("%d ",a[i]);
  }
  return 0;
}
