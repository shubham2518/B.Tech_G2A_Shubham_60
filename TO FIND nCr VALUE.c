#include <stdio.h>
int main(){

int n, r;

printf("Enter the value of n : ");
scanf("%d",&n);

printf("Enter the value of r : ");
scanf("%d",&r);

int i, nfact=1, rfact=1, nrfact=1, ncr;

for(i=1; i<=n; i++){
  nfact = nfact * i;
}
for(i=1; i<=r; i++ ){
  rfact = rfact * i;
}
for(i=1; i<=(n-r); i++){
  nrfact = nrfact * i;
}
ncr = nfact/(rfact*nrfact);
printf("%d", ncr);

  return 0;
}
