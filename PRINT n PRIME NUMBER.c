#include <stdio.h>

int main(){                         // n = RANGE LIMIT

  int n, i, j, count;                   // i = outer loop (for each number i from 1 to n
                                       
  printf("Enter value of n : ");      // i represents the current number being checked(i=1,2,3,4..n)

  scanf("%d",&n);                   // j(Check divisibility) = inner loop (for each number j from 1 to i) 
                                          
  for (i=1; i<=n; i++){               // if i=3 then j=1,2,3
  count=0;                          // count represents how many times i is divisible

      for (j=1; j<=i; j++){              //count=0 inside loop because we need fresh start for each number
        if (i%j==0){
          count++;
        }
      }

      if (count==2){
        printf("%d ",i);
      }
    }
  return 0;
}
