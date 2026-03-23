#include<stdio.h>
void swap(int x, int y){
  int temp=x;   //don't write int temp inside function
  x=y;
  y=temp;
  printf("\nNumbers before swapping : x=%d, y=%d\n", x, y);
}
int main(){
int a, b;
printf("Enter the value of a : ");
scanf("%d",&a);

printf("Enter the value of b : ");
scanf("%d",&b);

swap(a,b);
printf("Numbers after swapping : a=%d, b=%d", a, b);
  return 0;
}


/*Key concept : Call by value
This is temporary swapping because:
# Only copies are modified
# Original values are not affected
# Memory locations are differnt*/
