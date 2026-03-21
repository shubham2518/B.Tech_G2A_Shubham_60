//WAP TO FIND THE GREATER OF THREE NO. USING NESTED LOOP//

#include <stdio.h>
int main() {
    int age1, age2, age3, y;

    printf("Enter the Ages of RAM, SHYAM & MOHAN:\n");
    scanf("%d %d %d",&age1, &age2, &age3);

    if (age1<age2){
      if (age1<age3)
        y=age1;
      else  
        y=age3;
    }
    else{
      if (age2<age3)
        y=age2;
      else 
        y=age3;
    }
    printf("THE YOUNGEST AMONG RAM, SHYAM & MOHAN = %d", y);

    return 0;
}
