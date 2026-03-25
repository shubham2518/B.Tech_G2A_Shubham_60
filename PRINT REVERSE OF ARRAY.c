#include <stdio.h>
int main(){

  int n, a[100];

  printf("Enter the size of array : ");
  scanf("%d",&n);

  int i;
  printf("Enter the n elements : ");
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
  //reverse
  printf("Reversed array : ");
  for(i=n-1; i>=0; i--){         // start loop from i=(n-1)term till i=0 and decrement
    printf("%d ",a[i]);
  }
  return 0;
}

/* REVERSE USING TEMP:
LOGIC- 1). Swap first and last elements
       2). Then second and second-last
       3). Contiue till middle(n/2)


#include <stdio.h>
int main(){

int n, a[100];

printf("Enter the number of elements : ");
scanf("%d",&n);

int i;
printf("Enter the elements : ");
for(i=0; i<n; i++);{
  scanf("%d",&a[i]);
}
//Reverse
int temp;
for(i=0; i<n/2; i++)
{
   temp = a[i];
   a[i] = a[n-i-1];
   a[n-i-1] = temp;
}
printf("Reversed array : ");
for(i=0; i<n; i++){
   printf("%d ",a[i]);
}

return 0;
}
*/
