//WAP TO FIND THE GREATER OF TWO NO. USING CONDITONAL OPERATOR//

#include<stdio.h>
int main () {
  int a,b,max;
  
  printf("Enter two numbers:\n");
  scanf("%d %d",&a,&b);
  
  max=a>b? a:b,
  printf("\ngreater number=%d",max);
  
  return 0;
}




//WAP TO FIND THE GREATER OF THREE NO. USING CONDITONAL OPERATOR//

#include <stdio.h>
int main() {
    int a, b, c, max;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        max = a;
    else if (b > a && b > c)
        max = b;
    else
        max = c;

    printf("GREATER NUMBER = %d", max);

    return 0;
}







