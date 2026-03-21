#include <stdio.h>
int main () {

int n; // itni bar loop chalega

printf("Enter any integer : ");
scanf("%d",&n);

// 4  7 10  13  19....upto n number of terms
int a = 4;
for (int i=1; i<=n; i++){
    
  printf("%d\t",a);
  a = a + 3;
}
  return 0;
}
