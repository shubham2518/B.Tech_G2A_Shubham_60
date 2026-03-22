#include <stdio.h>
int main() {
    
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    
    int i, count=0;
    
    for(i=1; i<=n; i++){
        if(n%i==0)
        count++;
    }
    if(count==2){
        printf("A PRIME NUMBER");
    }
    else{
        printf("NOT A PRIME NUMBER");
    }
    
    return 0;
}
