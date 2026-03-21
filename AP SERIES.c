#include <stdio.h>
int main () {

int n,a,d; 
printf("Enter number of terms : ");
scanf("%d",&n);

printf("\nEnter the first element : ");
scanf("%d",&a);

printf("\nEnter the common difference : ");
scanf("%d",&d);

for (int i=1; i<=n; i++){
  
  printf("%d\t",a);
  a = a + d;
}
  return 0;
}
