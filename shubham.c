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




//WAP TO CHECK A NUMBER +VE -VE OR ZERO //

#include <stdio.h>
int main (){
  int a;

  printf("Enter the number [a]:");
  scanf("%d",&a);

if (a>0)
 printf("a is positive");

else if(a<0)
 printf("a is negative");

else if(a=0)
 printf("a is zero");

 return 0;

}
 

//WAP TO CHECK THE GIVEN CHARACTER IS UPPER CASE, LOWER CASE, NUMBER OR A SPECIAL CHARACTER//

 #include <stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit (Number)");
    }
    else {
        printf("Special character");
    }

    return 0;
}






