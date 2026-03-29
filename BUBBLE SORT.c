// Input by user
/*
#include <stdio.h>
int main() {

  int n, a[100];

  printf("Enter the size of array : ");
  scanf("%d",&n);

  printf("Enter the elements : ");
  for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  //bubble sort
  for(int i=0; i<n-1;  i++){
    for(int j=0; j<n-i-1; j++){
      if(a[j]>a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  for(int i=0; i<n; i++){
    printf("%d ",a[i]);
  }
  return 0;
}*/

// Compile run

#include <stdio.h>
int main() {

  int a[] = {5,4,3,2,1};
  int n=5;

  printf("Original array are : ");
  for(int i=0; i<n; i++){
    printf("%d ",a[i]);
  }

  //bubble sort
  
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){     // we can also write j<n-i-1
      if(a[j] > a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  printf("\nArray after bubble sorting : ");
  for(int i=0; i<n; i++){
    printf("%d ",a[i]);
  }
  
  return 0;
}


/* WHY n-i-1 ??
  Pass 1 (i=0); we complete till last index(n-1)
  Pass 2 (i=1); now no need to check last element(already sorted)
     so loop runs till n-i-1 = n-1-1
     
     after 1st pass - last element fixed
     after 2nd pass - last 2 elements fixed*/
