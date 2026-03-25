#include <stdio.h>
void fun(int x[], int n ){
   int i, temp;
   for(i=0; i<n/2; i++){
      temp = x[i];
      x[i] = x[n-i-1];
      x[n-i-1] = temp;
   } 
}
int main(){

int n, arr[100];

printf("Enter the number of elements : ");
scanf("%d",&n);

int i;
printf("Enter the elements : ");
for(i=0; i<n; i++){
  scanf("%d",&arr[i]);
}

fun(arr,n);

printf("Reversed array : ");
for(i=0; i<n; i++){
   
   printf("%d ",arr[i]);
}

return 0;
}
