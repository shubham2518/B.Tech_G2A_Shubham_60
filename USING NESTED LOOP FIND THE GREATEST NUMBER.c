//WAP TO FIND THE GREATER OF THREE NO. USING NESTED LOOP//

#include <stdio.h>
int main() {
    int a, b, c, max;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b){
      if (a>c)
        max = a;
      else  
        max = c;
    }
    else{
      if (b>c)
        max = b;
      else 
        max = c;
    }
    printf("GREATER NUMBER = %d", max);

    return 0;
}
