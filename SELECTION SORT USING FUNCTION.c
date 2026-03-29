#include <stdio.h>

void selectionsort(int a[], int n) {

  for(int i = 0; i < n - 1; i++) {
    int minIndex = i;

    for(int j = i + 1; j < n; j++) {
      if(a[j] < a[minIndex])
      minIndex = j;
    }

    // swap
    int temp = a[i];
    a[i] = a[minIndex];
    a[minIndex] = temp;
  }
}

//calling function
int main(){

  int a[] = {5,3,2,4};
  int n = 4; 

  selectionsort(a, n);

  for(int i=0; i<n; i++){
    printf("%d ",a[i]);
  }

  return 0;
}
