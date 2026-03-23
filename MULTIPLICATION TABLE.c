#include <stdio.h>
int main() {
int n, m;

printf("Enter any integer : ");
scanf("%d",&n);

int i;
for(i=1; i<=10; i++){
m=n*i;
printf("%d*%d=%d\n",n,i,m);
}

  return 0;
}
